class Solution {
  public:
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0,j=0;
        int cnt=0, maxCnt=INT_MIN;
        while(i<n){
            if(arr[i]<=dep[j]){
                cnt++;
                i++;
            }
            else{
                cnt--;
                j++;
            }
            maxCnt=max(cnt,maxCnt);
        }
        return maxCnt;
    }
};
