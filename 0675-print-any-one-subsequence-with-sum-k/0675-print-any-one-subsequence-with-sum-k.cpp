#include<bits/stdc++.h>
using namespace std;
bool printS(int ind,vector<int> &ds,vector<int> &arr,int sum,int k,int n){
    //base condition
    if(ind==n){
        //condition satisfied
        if(sum==k){
            for(auto it:ds){cout<<it<<" ";}
            cout<<endl;
            return true;
        }
        //condition not satisfied
        return false;
    }
    //pick condition
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    //subsequence found
    if(printS(ind+1,ds,arr,sum,k,n)==true) return true;
    sum-=arr[ind];
    ds.pop_back();
    //not pick condition
    if(printS(ind+1,ds,arr,sum,k,n)==true) return true;

    return false;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<int> ds;
    int n=9;
    int k=5;
    printS(0,ds,arr,0,k,n);
    return 0;
}