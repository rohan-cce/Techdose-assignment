int numTrees(int n){
 long K = 1;
    for(int i = 0; i < n; ++i) {
        K = K * 2 * (2 * i + 1) / (i + 2);
    }
    return (int) K;
}