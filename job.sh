#!/bin/bash
#SBATCH --job-name=ChAI_perf_test
#SBATCH --nodes=${NUM_NODES}
#SBATCH --time=03:00:00
#SBATCH --mail-type=ALL
#SBATCH --mail-user=iain.moncrief@hpe.com

python3 times.py measure "./MultiLocaleInference -nl ${NUM_NODES} --numImages=${NUM_IMAGES} --numTries=10 --printResults=false" --name "ml_test_${num_nodes}_${num_images}"