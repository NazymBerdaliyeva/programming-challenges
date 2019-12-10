//Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, prod=1, digit;
        while(n>0){
            digit = n%10;
            sum+=digit;
            prod*=digit;
            n/=10;
        }
        return prod - sum;
    }
};