#include <iostream>
#include <vector>
using namespace std;

bool isSubstring(string s1, string s2) {
    if(s1.length() > 0 && s1.length() == s2.length()) {
        string s = s1 + s1;
        if(s.find(s2) !=string::npos)
            return true;
    }
    return false;
}
int main(int argc, const char * argv[]) {
    string s1 = "waterbottle";
    string s2 = "erbottlewat";
    if(isSubstring(s1,s2))
        cout<<"Yes\n";
    else
        cout<<"no\n";
    return 0;
}
