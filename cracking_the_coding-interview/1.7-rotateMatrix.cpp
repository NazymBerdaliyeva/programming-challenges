#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotate1(vector<vector<int>> &M) {
    vector<vector<int>> empty;
    if(M.size()==0 || M.size() != M[0].size())
        return empty;
    int size = M.size();
    vector<vector<int>> newM(size, vector<int> (size));
    
    for(int i=0; i< size; i++) {
        for(int j=0; j<size; j++) {
            newM[i][j] = M[j][size-1-i];
        }
    }
    return newM;
}

bool rotate2(vector<vector<int>> &M) {
    if(M.size()==0 || M.size() != M[0].size())
        return false;
    int n = M.size();
    
    for(int layer = 0; layer < n/2; layer++) {
        int first = layer;
        int last = n - 1 - layer;
        for(int i = first; i<last; i++) {
            int offset = i - first;
            int top = M[first][i];
            M[first][i] = M[last-offset][first];
            M[last-offset][first] = M[last][last-offset];
            M[last][last-offset] = M[i][last];
            M[i][last] = top;
        }
        
    }
    return true;
}

int main(int argc, const char * argv[]) {
    vector<vector<int> > M = {{1,2,3,4},
                            {5,6,7,8},
                            {9,1,2,3},
                            {4,5,6,7}};
  //  vector<vector<int>> rotated = rotate1(M);
    bool t = rotate2(M);
    for(int i=0; i<M.size(); i++) {
        for(int j=0; j<M[0].size(); j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
