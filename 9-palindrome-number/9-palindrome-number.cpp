class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        else{
            long long temp=x;
            long long res=0;
            long long r=0;
            while(temp!=0){
                r=temp%10;
                res=res*10+r;
                temp=temp/10;
            }
            if(x==res)
                return true;
        }
        return 0;
    }
};