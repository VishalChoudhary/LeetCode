int func(int mid,int n,int m){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*mid;
        if(ans>m) 
            return 2;
    }
    if(ans==m) 
        return 1;
    return 0;
}
int NthRoot(int n, int m) {
  // Write your code here.
  }