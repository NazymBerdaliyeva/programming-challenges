#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
TreeNode* createMinimalBST(vector<int> arr, int start, int end){
    if(end<start)
        return NULL;
    int mid = (start + end)/2;
    TreeNode* n = new TreeNode(arr[mid]);
    n->left = createMinimalBST(arr, start, mid - 1);
    n->right = createMinimalBST(arr, mid + 1, end);
    return n;
}

int main(int argc, const char * argv[]) {
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    TreeNode* res = createMinimalBST(arr,0,arr.size()-1);
    return 0;
}
