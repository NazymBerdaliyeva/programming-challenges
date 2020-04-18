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
string urlify(string s, int trueLength) {
    string result="";
    for(int i=0; i<trueLength; i++) {
        if(s[i] == ' ')
        {
            result+="%20";
            continue;
        }
        result+= s[i];
    }
    return result;
}

int main(int argc, const char * argv[]) {
    string s = "Mr John Smith";
    
    cout<<urlify(s,13)<<endl;
    
    return 0;
}
