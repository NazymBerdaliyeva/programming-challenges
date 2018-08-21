class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int rowSize = A.size();
        int columnSize = A[0].size();
        vector<vector<int>> B(columnSize, vector<int>(rowSize));
        for(int i=0; i<A.size(); i++) {
            for(int j=0; j<A[i].size(); j++) {
                B[j][i]=A[i][j];
            }
        }
        return B;
    }
};