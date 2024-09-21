int merge(vector<int>& nums, int low, int mid, int high) {
    vector<int> temp(high - low + 1, 0);
    int ind = 0;
    int left = low;
    int right = mid + 1;
    int cnt = 0;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp[ind++] = nums[left++];
        }
        // right is small
        else {
            temp[ind++] = nums[right++];
            cnt += (mid - left + 1);
        }
    }
    while (left <= mid) {
        temp[ind++] = nums[left++];
    }
    while (right <= high) {
        temp[ind++] = nums[right++];
    }
    ind = 0;
    for (int i = low; i <= high; i++) {
        nums[i] = temp[ind++];
    }
    return cnt;
}

int mergeSort(vector<int>& nums, int low, int high) {
    int cnt = 0;
    if (low < high) {
        int mid = (low + high) / 2;
        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid + 1, high);
        cnt += merge(nums, low, mid, high);
    }
    return cnt;
}

int numberOfInversions(vector<int>& a, int n) {
    // Write your code here.
    return mergeSort(a, 0, n - 1);
}
