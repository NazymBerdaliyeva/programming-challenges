class Solution {
public:
    string reverseStr(string s, int k) {
        int index, oldindex=0, i = 1;
        
        while(oldindex < s.length()) {
            if(k==1){
                return s;
            }else if(k>s.length()) {
               reverse(s.begin(), s.end());
                break;
            } else {
            index = k+oldindex;
            if((s.length()-oldindex) <= 2) {
                    index = s.length();
                }
             reverse(s.begin()+oldindex, min(s.begin()+index, s.end()));
             oldindex=2*k*i;
            i++;
            } 
        }
        return s;
    }
};
