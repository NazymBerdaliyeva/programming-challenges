//
//  main.cpp
//  firstProgram
//
//  Created by Macbook on 1/12/20.
//  Copyright © 2020 Macbook. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

bool oneEditAway1(string str1, string str2) {
      vector<int> freq (26, 0);
      for(int i=0; i< str1.length(); i++) {
          freq[str1[i] - 'a']++;
      }
      for(int i =0; i<str2.length(); i++) {
          if(freq[str2[i]- 'a']>0)
              freq[str2[i] - 'a']--;
      }
      int count = 0;
      for(int x : freq)
          if(x>0)
            count++;
      
    return count <=1 ? true:false;
}

bool oneEditAway2(string first, string second) {
    int len = first.length() - second.length() ;
    if(abs(len) > 1)
           return false;
           
           int index1 = 0, index2 = 0;
    bool foundDifferense = false;
           string s1 = first < second ? first : second;
           string s2 = first < second ? second : first;
           
           while(index1 < s1.length() && index2 < s2.length()) {
            
            if(s1[index1] != s2[index2]) {
                if(foundDifferense)
                  return false;
                foundDifferense = true;
                if(s1.length() == s2.length())
                  index1++;
            }
            else {
                index1++;
            }
               index2++;
        }
    return true;
}

int main(int argc, const char * argv[]) {
    string str1 = "bake";
    string str2 = "pale";
    if(oneEditAway1(str1, str2))
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
