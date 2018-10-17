class Solution {
public:
    string reverseOnlyLetters(string S) {
        int begin =0, end = S.size()-1;
        while(begin<end){
            if(isalpha(S[begin]) && isalpha(S[end])){
                swap(S[begin], S[end]);
                begin++;
                end--;
            }
            else{
                if(!isalpha(S[begin]))
                    begin++;
                else if(!isalpha(S[end])){
                    end--;
                }
            }
        }
        return S;
    }
};