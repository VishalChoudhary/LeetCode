class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int longest = 1;
        unordered_set<int> uset;
        for(int i=0;i<n;i++){
            uset.insert(nums[i]);
        }
        for(auto it:uset){
            if(uset.find(it-1)==uset.end()){
                int cnt = 1;
                int x = it;
                while(uset.find(x+1)!=uset.end()){
                    x+=1;   	
                    cnt+=1;
                }
                longest = max(cnt,longest);
            }
        }
        return longest;
    }
};