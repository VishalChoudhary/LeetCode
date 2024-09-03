class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0, ind = -1, found = 0;
        int n = haystack.size();
        int m = needle.size();
        while (i < n) {
            if (haystack[i] == needle[j]) {
                if (j == 0)
                    ind = i;
                i++;
                j++;
                if (j == m) {
                    found = 1;
                    break;
                }
            } else {
                if (ind != -1)
                    i = ind;
                ind = -1;
                j = 0;
                i++;
            }
        }
        if (found == 1)
            return ind;
        else
            return -1;
    }
};