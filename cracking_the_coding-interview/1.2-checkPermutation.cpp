//
//  main.cpp
//  firstProgram
//
//  Created by Macbook on 1/12/20.
//  Copyright © 2020 Macbook. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
bool isPermutation1(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1==s2)
        return true;
    return false;
}
bool isPermutation2(string s1, string s2) {
    if(s1.length() != s2.length())
           return false;
    
    int letters[127];
    for(int i=0; i<s1.length(); i++) {
        int c = s1[i] - 48;
        letters[c]++;
    }
    for(int i=0; i<s2.length();i++) {
        int c = s2[i] - 48;
        letters[c]--;
        if(letters[c] < 0)
            return false;
    }
    return true;
}
int main(int argc, const char * argv[]) {
    string s1 = "qwertyuiop";
    string s2 = "qwertyuiop";
    
    if(isPermutation2(s1,s2))
        cout<<"Yes";
    else cout<<"No";
    
    return 0;
}
