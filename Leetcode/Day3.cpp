 int ans=n;
    int p=1;//p stands for power
    while(n){
        if(n%10==0){
            ans+=p*5;
        }
        n/=10;
        p=(p*10);
    }
    return ans;