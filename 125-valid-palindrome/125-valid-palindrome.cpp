class Solution {
public:
    bool isPalindrome(string s) {
        string ch="";
		int n=s.size();
		for(int i=0;i<n;i++){
			if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
				ch+=s[i];
			}
		}
		transform(ch.begin(),ch.end(),ch.begin(),::tolower);
		for(int i=0;i<ch.size();i++){
			if(ch[i]!=ch[ch.size()-i-1])
			return false;
		}
		return true;
        
    }
};