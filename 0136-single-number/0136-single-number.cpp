class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1)
            return nums[0];
        unordered_map<int,int> ump;
        for(int i=0;i<n;i++){
            ump[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            int key=nums[i];
            auto temp=ump.find(key);
            if(temp->second==1)
                return key;
        }
        return 0;
    }
};