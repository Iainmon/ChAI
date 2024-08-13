import argparse


parser = argparse.ArgumentParser('job_construction_script')
parser.add_argument('--num_images', help='Number of images.', type=int)
parser.add_argument('--num_nodes', help='Number of nodes.', type=int)
args = parser.parse_args()


num_images = args.num_images
num_nodes = args.num_nodes

job_source = f"""#!/bin/bash
#SBATCH --job-name=ChAI_perf_{num_nodes}
#SBATCH --partition=workq
#SBATCH --nodes={num_nodes}
#SBATCH --cpus-per-task=96
#SBATCH --time=03:00:00
#SBATCH --mail-type=ALL
#SBATCH --mail-user=iain.moncrief@hpe.com

for num_images in 1 5 10 50 100 500 1000 5000 10000
do
    python3 times.py measure "./MultiLocaleInference -nl {num_nodes} --numImages=$num_images --numTries=10 --printResults=false" --name "ml_test_{num_nodes}_$num_images"
done
"""

with open('tmp_job.sh','w') as f:
    f.write(job_source)