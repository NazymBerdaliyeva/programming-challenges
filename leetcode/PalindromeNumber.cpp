class Solution {
public:
    bool isPalindrome(int x) {
        bool palindrome = false, negative = false;
        long long int palindromeNumber = 0, temp = 0;
        int reminder = 0;
        
        temp = x;
        
        if(x < 0) {
            negative = true;
            x = -x;
        }
        while(x != 0) {
            reminder = x % 10;
            palindromeNumber = palindromeNumber * 10 + reminder;
            x = x / 10 ;
        }
        if(negative){
            palindrome=false;
        }
        if(palindromeNumber == temp){
            palindrome = true;
        }
        return palindrome;
    }
};