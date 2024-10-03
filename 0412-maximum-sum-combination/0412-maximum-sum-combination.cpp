class Solution {
  public:
    vector<int> maxCombinations(int n, int k, vector<int> &A, vector<int> &B) {
        // code here
        vector<int> ans;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        priority_queue<pair<int,pair<int,int>>> pq;
        set<pair<int,int>> s;
        pq.push({A.back()+B.back(),{n-1,n-1}});
        s.insert({n-1,n-1});
        while(k--){
            auto p=pq.top();
            int sum=p.first;
            int i=p.second.first;
            int j=p.second.second;
            ans.push_back(sum);
            pq.pop();
            if(i-1>=0 && s.find({i-1,j})==s.end()){
                pq.push({A[i-1]+B[j],{i-1,j}});
                s.insert({i-1,j});
            }
            if(j-1>=0 && s.find({i,j-1})==s.end()){
                pq.push({A[i]+B[j-1],{i,j-1}});
                s.insert({i,j-1});
            }
        }
        return ans;
    }
};
