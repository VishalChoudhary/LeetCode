class Solution {
  public:
    void func(int ind,int sum,vector<int> &arr,int N,vector<int> &subSetSum){
        if(ind==N){
            subSetSum.push_back(sum);
            return;
        }
        func(ind+1,sum+arr[ind],arr,N,subSetSum);
        func(ind+1,sum,arr,N,subSetSum);
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int>subSetSum;   
        func(0,0,arr,n,subSetSum);
        sort(subSetSum.begin(),subSetSum.end());
        return subSetSum;
    }
};
