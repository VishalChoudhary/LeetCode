int upperBound(vector<int> &arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int countEqualSmall(vector<vector<int>> &matrix, int n, int m, int x) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += upperBound(matrix[i], m, x); // Pass m (number of columns) instead of n
    }
    return cnt;
}

int median(vector<vector<int>> &matrix, int r, int c) {
    int low = INT_MAX;
    int high = INT_MIN;

    r = matrix.size(); // Rows
    c = matrix[0].size(); // Columns

    // Find the minimum and maximum elements in the matrix
    for (int i = 0; i < r; i++) {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][c - 1]);
    }

    int req = (r * c) / 2; // Required position for the median\

    // Perform binary search to find the median
    while (low <= high) {
        int mid = (low + high) / 2;
        int small = countEqualSmall(matrix, r, c, mid); // Get count of elements <= mid

        if (small <= req) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return low; // Return the median
}
