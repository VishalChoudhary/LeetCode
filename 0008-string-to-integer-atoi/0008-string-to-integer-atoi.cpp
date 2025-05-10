class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        if(n==0)
            return 0;
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        s=s.substr(i);
        int sign=+1;
        long long ans=0;
        if(s[0]=='-') sign=-1;
        int max=INT_MAX;
        int min=INT_MIN;
        i=(s[0]=='+' || s[0]=='-')?1:0;
        while(i<n){
            if(s[i]==' '|| !isdigit(s[i])) break;
            ans=ans*10+s[i]-'0';
            if(sign==-1 && -1*ans<min) return min;
            if(sign==1 && 1*ans>max) return max;
            i++;
        }
        return (int)(sign*ans);
    }
};