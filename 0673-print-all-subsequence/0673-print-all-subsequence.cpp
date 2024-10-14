#include<bits/stdc++.h>
using namespace std;
void printF(int ind,vector<int> &ds,vector<int> &arr, int n){
    //base condition
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0)
            cout<<"{}";
        cout<<endl;
        return;
    }
    //pick the particular index into subsequence
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back();

    //not pick the particular index into subsequence
    printF(ind+1,ds,arr,n);
}
int main(){
    vector<int> arr = {3,1,2};
    vector<int> ds;
    int n=3;
    printF(0,ds,arr,n);
    return 0;
}


Output:
3 1 2 
3 1
3 2
3
1 2
1
2
{}