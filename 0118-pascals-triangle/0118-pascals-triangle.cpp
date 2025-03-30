class Solution {
public:

    vector<int> nRows(int row){
        vector<int> ansRow;
        ansRow.push_back(1);
        long long ans=1;
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        for(int i=1;i<=numRows;i++){
            res.push_back(nRows(i));
        }
        return res;
    }
};