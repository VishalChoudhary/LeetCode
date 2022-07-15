class Solution {
public:
    int search(vector<int>& nums, int target) {
        int flag=0;
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                index=i;
                flag=1;
                break;
            }
        }
        if(flag==1){
            return index;
        }
        else
            return -1;
    }
};