#include<bits/stdc++.h>
using namespace std;
int printS(int ind,vector<int> &arr,int sum,int k,int n){
    if(ind==n){
        if(sum==k) return 1;
        else return 0;
    }
    //pick condition
    sum+=arr[ind];
    int l= printS(ind+1,arr,sum,k,n);
    sum-=arr[ind];
    //not pick condition
    int r= printS(ind+1,arr,sum,k,n);
    return l+r;
} 
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n=9;
    int k=5;
    cout<<printS(0,arr,0,k,n);
    return 0;
}