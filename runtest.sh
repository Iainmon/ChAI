#SBATCH_NODES=4


# cd ~/projects/gputil

for num_nodes_ in {1..10}
do
    num_nodes=$(( num_nodes_ ** 2 ))
    for num_images in 1 5 10 50 100 500 1000 5000 10000
    do

        # export CHPL_COMM="gasnet"
        # export CHPL_LAUNCHER="slurm_amudprun"
        # export GASNET_SSH_SERVERS=$(scontrol show hostnames | xargs echo)

        echo "Running on $num_nodes nodes with $num_images images."
        python3 makejob.py --num_images=$num_images --num_nodes=$num_nodes
        sbatch tmp_job.sh
        # python3 times.py measure "./MultiLocaleInference -nl $num_nodes --numImages=$num_images --numTries=10 --printResults=false" --name "ml_test_${num_nodes}_${num_images}"
    done
done
