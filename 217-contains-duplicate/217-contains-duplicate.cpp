class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int flag=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            return true;
        else
            return false;
    }
};