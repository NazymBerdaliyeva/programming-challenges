class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
    vector<vector<int>> result(r, vector<int>(c));
    int row = nums.size();
    int column = nums[0].size();
        if(row*column != r*c) {
            return nums;
        } else {
            for(int i=0; i<r*c; i++) {
                result[i/c][i%c] = nums[i/column][i%column];
            }
        }
        return result;    
    }
};