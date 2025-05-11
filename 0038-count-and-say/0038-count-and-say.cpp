class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        return "1";
        string res="";
        string say=countAndSay(n-1);
        for(int i=0;i<say.size();i++){
            char ch=say[i];
            int cnt=1;
            while(i<say.size()-1 && say[i]==say[i+1]){
                cnt++;
                i++;
            }
            res+=to_string(cnt)+string(1,ch);
        }
        return res;
    }
};