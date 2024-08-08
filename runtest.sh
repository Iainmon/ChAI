for num_nodes in `seq 1 20` 
do
    for num_images in 1 5 10 50 100 500 1000 5000 10000 
    do
        python3 times.py measure "./MultiLocaleInference -nl $n --numImages=1000 --numTries=10 --printResults=false" --name "ml_test_${num_nodes}_${num_images}"
    done
done