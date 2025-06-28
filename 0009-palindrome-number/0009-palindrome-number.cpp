class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0))
        return false;
        else{
            long long temp;
            long long res=0;
            long long ld=0;
            temp=x;
            while(temp!=0){
                ld=temp%10;
                res=res*10+ld;
                temp/=10;
            }
            if(x==res)
            return true;
        }
        return false;
    }
};