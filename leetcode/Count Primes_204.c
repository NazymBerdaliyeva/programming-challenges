class Solution {
public:
     bool isPrime(int number){
        for(int i = 2; i*i <= number; i++)
        {
         if(number%i==0)
            return false;
        }
      return true;
    }
    int countPrimes(int n) {
      int count = 0, i=2;
        while(i < n){
            if(isPrime(i)){
               count++;
            }  
            i++;
        }
        return count;
    }
};