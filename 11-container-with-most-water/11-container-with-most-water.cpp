class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int ans=0;
        while(l<r){
            int lh=height[l];
            int rh=height[r];
            int min_h=min(lh,rh);
            ans=max(ans,min_h*(r-l));
            if(lh<rh){
                l++;
            }
            else{r--;}
        }
        return ans;
    }
};