//using Moore's voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0, n=nums.size();
        int el=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt+=1;
                el=nums[i];
            }
            else if(el==nums[i]){
                cnt+=1;
            }
            else cnt-=1;
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(el==nums[i]){
                cnt1+=1;
            }
        }
        if(cnt1>n/2){
            return el;
        }
        return -1;
    }
};