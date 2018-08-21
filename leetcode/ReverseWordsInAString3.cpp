class Solution {
public:
    string reverseWords(string s) {
        int index, oldIndex=0;
        for(int i =0; i < s.length(); i++) {
            if(s[i] == ' ') {
                index = i;
                reverse(s.begin()+oldIndex, s.begin()+index);
                 oldIndex = index+1;
            }
            if(i==s.length()-1) {
                index = s.length();
                reverse(s.begin()+oldIndex, s.begin()+index);
            }
           
        }
        return s;
    }
};