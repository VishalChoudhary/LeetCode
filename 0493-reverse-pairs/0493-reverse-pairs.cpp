class Solution {
public:
    void merge(vector<int>&nums, int low, int mid, int high){
        vector<int> temp(high-low+1);
        int left=low;
        int right=mid+1;
        int ind = 0;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp[ind++] = nums[left++];
            }
            else{
                temp[ind++] = nums[right++];
            }
        }
        while(left<=mid){
            temp[ind++] = nums[left++];
        }
        while(right<=high){
            temp[ind++] = nums[right++];
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }
    int countPairs(vector<int>&nums, int low, int mid, int high){
        int right = mid+1;
        int cnt=0;
        for(int i=low;i<=mid;i++){
            while(right<=high && (long long)nums[i]>2*(long long)nums[right]){
                right++;
            }
            cnt+=right-(mid+1);
        }
        return cnt;
    }
    int mergeSort(vector<int>&nums, int low, int high){
        int cnt=0;
        if(low>=high)
        return cnt;
        int mid = (low+high)/2;
        cnt+=mergeSort(nums,low,mid);
        cnt+=mergeSort(nums,mid+1,high);
        cnt+=countPairs(nums,low,mid,high);
        merge(nums,low,mid,high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums,0,n-1);
    }
};