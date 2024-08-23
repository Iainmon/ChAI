rm -rf debug-savec/
rm -rf remoteTest.dSYM/
rm -f remoteTest

export CHPL_TARGET_COMPILER=gnu

# chpl remoteTest.chpl \
#     --print-all-candidates \
#     --devel \
#     -g \
#     --preserve-inlined-line-numbers \
#     --no-inline \
#     --no-munge-user-idents \
#     --no-return-by-ref \
    # --savec
    # --target-compiler=gnu \

# cd debug-savec
# CHPL_TARGET_COMPILER=gnu make

chpl remoteTest.chpl \
    --target-compiler=gnu \
    -g \
    --preserve-inlined-line-numbers \
    --no-inline \
    --no-munge-user-idents \
    --no-return-by-ref \
    --savec debug-savec

cd debug-savec

make all -j4