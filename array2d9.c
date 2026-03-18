int balancedRows(int a[][100], int r, int c){
    int count=0;

    for(int i=0;i<r;i++){
        int even=0, odd=0;

        for(int j=0;j<c;j++){
            if(a[i][j] % 2 == 0) even++;
            else odd++;
        }

        if(even == odd) count++;
    }
    return count;
}