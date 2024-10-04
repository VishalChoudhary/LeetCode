class Solution {
  public:
    vector<int> posNegPair(vector<int> &arr) {
        // Code here
        vector<int> ans,v;
        map<int,int> mpp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<0)
                v.push_back(arr[i]);
            else
                mpp[arr[i]]++;
        }
        sort(v.begin(),v.end());
        for(int i=(int)v.size()-1;i>=0;i--){
            int data=abs(v[i]);
            if(mpp[data]>0){
                ans.push_back(v[i]);
                ans.push_back(data);
                mpp[data]--;
            }
        }
        return ans;
    }
};
