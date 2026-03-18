int saddle(int a[][100], int r, int c){
    int count=0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            int isRowMin=1, isColMax=1;

            for(int k=0;k<c;k++)
                if(a[i][k] < a[i][j]) isRowMin=0;

            for(int k=0;k<r;k++)
                if(a[k][j] > a[i][j]) isColMax=0;

            if(isRowMin && isColMax)
                count++;
        }
    }
    return count;
}