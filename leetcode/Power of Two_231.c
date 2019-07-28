class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long number = 1;
        if(n==1)
            return true;
        while(number <= n){
            number *=2;
            if(number==n)
                return true;
        }
        return false;
    }
};