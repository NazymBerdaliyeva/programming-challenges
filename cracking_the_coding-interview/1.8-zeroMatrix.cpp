#include <iostream>
#include <vector>
using namespace std;
void nullifyRow(vector<vector<int>> &M, int row) {
    for(int j=0; j< M[0].size(); j++)
        M[row][j] = 0;
}

void nullifyColumn(vector<vector<int>> &M, int column) {
    for(int j=0; j< M[0].size(); j++)
        M[j][column] = 0;
}
void zeroMatrix(vector<vector<int>> &M) {
    vector<bool> row (M[0].size(),false);
    vector<bool> column (M.size(), false);
    
    for(int i=0; i<M.size(); i++) {
        for(int j=0; j<M[i].size(); j++) {
            if(M[i][j]==0) {
                row[i] = true;
                column[j] = true;
            }
        }
    }
    for(int i=0; i<M[0].size(); i++) {
        if(row[i])
            nullifyRow(M, i);
    }
    
    for(int i=0; i<M.size(); i++) {
        if(column[i])
            nullifyColumn(M, i);
    }
    
}

int main(int argc, const char * argv[]) {
    vector<vector<int> > M = {{1,2,3,4},
                            {5,0,7,8},
                            {9,1,2,3},
                            {4,5,6,7}};
    zeroMatrix(M);
  
    for(int i=0; i<M.size(); i++) {
        for(int j=0; j<M[0].size(); j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
