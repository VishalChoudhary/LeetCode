class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {findFirst(nums,target),findLast(nums,target)};
    }
    private:
    int findFirst(const vector<int>& nums, int target){
        int l=0, r=nums.size()-1, res=-1;
        while(l<=r){
            int mid = l+(r-l) / 2;
            if(target<=nums[mid]){
                r=mid-1;
            }
            else l=mid+1;
            if(nums[mid]==target){
                res=mid;
            }
        }
        return res;
    }

    int findLast(const vector<int>& nums, int target){
        int l=0, r=nums.size()-1, res=-1;
        while(l<=r){
            int mid=l+(r-l) / 2;
            if(target>=nums[mid]){
                l=mid+1;
            }
            else r=mid-1;
            if(nums[mid]==target){
                res=mid;
            }
        }
        return res;
    }
};