import sys
import re
import argparse
import subprocess
import os
import json
import scipy.stats

regex = re.compile(r"Time: (.+) seconds")

def measure(args):
    command = args.command
    name = args.name

    if not name:
        name = input("Enter a name for this measurement: ")

    times = []
    p = subprocess.Popen(command.split(), stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if p.stdout:
        for line in p.stdout:
            line = line.decode("utf-8").strip()
            match = regex.match(line)
            if match: times.append(float(match.group(1)))

    if len(times) == 0:
        raise Exception("no time output found!")

    avg = sum(times) / len(times)
    stddev = (sum((t - avg) ** 2 for t in times) / len(times)) ** 0.5

    data = {
        "avg": avg,
        "stddev": stddev,
        "times": times
    }

    if not os.path.exists(".timedata"):
        os.makedirs(".timedata")

    with open(f".timedata/{name}.json", "w") as f:
        f.write(json.dumps(data))

def compare(args):
    old = args.old
    if not old:
        old = input("Enter the name of the old measurement: ")

    new = args.new
    if not new:
        new = input("Enter the name of the new measurement: ")

    with open(f".timedata/{old}.json", "r") as f:
        old_data = json.loads(f.read())

    with open(f".timedata/{new}.json", "r") as f:
        new_data = json.loads(f.read())

    _, p = scipy.stats.ttest_ind(old_data["times"], new_data["times"])
    print(f"Difference between samples is: {old_data['avg'] - new_data['avg']} seconds, confidence that they are different (smaller is better): {p}")


parser = argparse.ArgumentParser()
subparsers = parser.add_subparsers();

measure_parser = subparsers.add_parser("measure")
measure_parser.add_argument("command")
measure_parser.add_argument("--name", default=None)
measure_parser.set_defaults(func=measure)

compare_parser = subparsers.add_parser("compare")
compare_parser.add_argument("--old", default=None)
compare_parser.add_argument("--new", default=None)
compare_parser.set_defaults(func=compare)

args = parser.parse_args()
args.func(args)