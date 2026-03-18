int maxProductRow(int a[][100], int r, int c){
    long maxProd = -999999;
    int index = 0;

    for(int i=0;i<r;i++){
        long prod = 1;
        for(int j=0;j<c;j++){
            prod *= a[i][j];
        }

        if(prod > maxProd){
            maxProd = prod;
            index = i;
        }
    }
    return index;
}