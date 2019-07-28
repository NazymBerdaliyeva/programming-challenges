class Solution {
public:
    bool isPowerOfFour(int num) {
        long long number = 1;
        if(num==1)
            return true;
        while(number <= num){
            number *=4;
            if(number==num)
                return true;
        }
        return false;
    }
};