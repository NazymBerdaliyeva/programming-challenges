class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = 0, sumB = 0, sizeA = A.size(), sizeB = B.size(), difference;
        vector<int> result;
        for (int i = 0; i < sizeA; i++)
            sumA += A[i];
        for (int i = 0; i < sizeB; i++)
            sumB += B[i];
        difference = (sumA - sumB) / 2;
        for (int i = 0; i < sizeA; i++) {
            for (int j = 0; j < sizeB; j++) {
                if (A[i] - B[j] == difference)
                {
                    result.push_back(A[i]);
                    result.push_back(B[j]);
                    return result; 
                }   
            }
        }
        return result;
    }
};