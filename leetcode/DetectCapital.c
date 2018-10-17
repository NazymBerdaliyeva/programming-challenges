class Solution {
public:
    bool detectCapitalUse(string word) {
        bool result = false, flag = false;
        int size = word.size(), countUpper=0, countLower=0;
        for(int i=0; i<size;i++){
            if(isupper(word[0]))
                flag = true;
            if(isupper(word[i]))
               countUpper++;
            else
                countLower++;
       }
        if(flag && countUpper==1)
            result = true;
        else if(countUpper == size)
             result = true;
        else if(countLower == size)
             result = true;
        return result;
    }
};