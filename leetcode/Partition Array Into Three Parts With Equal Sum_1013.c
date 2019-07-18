class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = 0, size = A.size(), eachPartSum, partSum=0, count = 0;
        for(int i=0; i<size;i++)
            sum += A[i];
            if (sum % 3 != 0)
                return false;
        eachPartSum = sum / 3;
        for(int i=0; i<size; i++){
            partSum += A[i];
            if(partSum == eachPartSum)
            {
                count += 1;
                partSum = 0;
                if(count == 2)
                   return true;
            } 
        }
        return false;
    }
};