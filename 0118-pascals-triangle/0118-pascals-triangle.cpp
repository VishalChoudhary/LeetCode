class Solution {
public:

    vector<int> rowsN(int row){
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1;i<=numRows;i++){
            result.push_back(rowsN(i));
        }    
        return result;    
    }
};