class Solution {

    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp(high-low+1,0);
        int ind=0;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp[ind++]=nums[left++];
            } else {
                temp[ind++]=nums[right++];
            }
        }
        while (left <= mid) {
            temp[ind++]=nums[left++];
        }
        while (right <= high) {
            temp[ind++]=nums[right++];
        }
        ind=0;
        for (int i = low; i <= high; i++) {
            nums[i] = temp[ind++];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            mergeSort(nums, low, mid);
            mergeSort(nums, mid + 1, high);
            merge(nums, low, mid, high);
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n - 1);
        return nums;
    }
};