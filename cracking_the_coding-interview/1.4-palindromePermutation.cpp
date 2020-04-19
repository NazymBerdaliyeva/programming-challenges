#include <iostream>
#include <map>
using namespace std;

//O(N)
bool isPermutationOfPalindrome(string s) {
    map<char,int> frequency;
    string copyWithoutSpace = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != ' ') {
            frequency[s[i]]++;
            copyWithoutSpace += s[i];
        }
    }
    bool odd = false;
        for(auto const& x: frequency) {
            if(x.second%2==1) {
                if(!odd)
                    odd = true;
                else
                    return false;
            }
        }
    return true;
}
