#include<bits/stdc++.h>
using namespace std;
void printS(int ind,vector<int> &ds,vector<int> &arr,int sum,int k,int n){
    //base condition
    if(ind==n){
        //checking if sum is same of target/k or not
        if(sum==k){
            for(auto it:ds){cout<<it<<" ";}
            cout<<endl;
        }
        return;
    }
    //pick condition
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    printS(ind+1,ds,arr,sum,k,n);
    sum-=arr[ind];
    ds.pop_back();
    //not pick condition
    printS(ind+1,ds,arr,sum,k,n);
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<int> ds;
    int n=9;
    int k=5;
    printS(0,ds,arr,0,k,n);
    return 0;
}