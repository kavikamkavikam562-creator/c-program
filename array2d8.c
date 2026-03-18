int maxBlock(int a[][100], int r, int c){
    int maxSum = -99999;

    for(int i=0;i<r-1;i++){
        for(int j=0;j<c-1;j++){
            int sum = a[i][j] + a[i][j+1] +
                      a[i+1][j] + a[i+1][j+1];

            if(sum > maxSum)
                maxSum = sum;
        }
    }
    return maxSum;
}