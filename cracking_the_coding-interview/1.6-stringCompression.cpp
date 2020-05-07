#include <iostream>
using namespace std;

string stringCompression(string s) {
    string compressed = "";
    int count =1;
    char tmp=s[0];
    for(int i=1; i<s.length(); i++) {
        if(tmp==s[i])
            count++;
        else {
            char c = count + '0';
            compressed += tmp;
            compressed += c;
            count = 1;
            tmp = s[i];
        }
            
    }
    compressed +=tmp;
    compressed += (count + '0');
    return compressed;
}

int main(int argc, const char * argv[]) {
    string str1 = "aabcccccaaa";
    
    string compressed = stringCompression(str1);
    if(str1.length() > compressed.length())
        cout<<compressed<<endl;
    else
        cout<<str1<<"\n";
    return 0;
}
