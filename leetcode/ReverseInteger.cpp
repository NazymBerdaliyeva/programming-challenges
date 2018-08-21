class Solution {
public:
    int reverse(int x) {
       long long int reversedVariable = 0;
        int reminder = 0;
        bool negative = false;
        if(x<0){
            negative = true;
            x = -x;
        }
        while(x != 0){
            reminder = x%10;
            reversedVariable = reversedVariable*10 + reminder;
            x = x/10;
        }
        if(negative) {
           reversedVariable = -reversedVariable;
        }
        if(reversedVariable < -2147483648 || reversedVariable > 2147483647){
            reversedVariable=0;
        } 
    
        return reversedVariable;    
        
    }
};