    for(int i = 0 ; i < N ; i++){
        if(judge(n,i)){
            a[n][i] = 1;
            go(n+1);
        }
    }