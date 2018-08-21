class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool isEqual = false;
        int count = 0;
        for(int i=1; i<matrix.size(); i++){
            for(int j=1; j<matrix[i].size(); j++){
                if(matrix[i][j] == matrix[i-1][j-1]){
                   isEqual = true;
                }
                if(!isEqual) {
                  count++;  
                }
                isEqual=false;
            }
        }
        if(count == 0) {
           isEqual = true;
        }
          
        return isEqual;
    }
};