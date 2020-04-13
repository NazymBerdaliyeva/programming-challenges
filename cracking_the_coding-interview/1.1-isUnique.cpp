#include <iostream>
#include <set>
using namespace std;

//brute-force solution O(n^2) 
bool isUnique(string str)
{
    for(int i=0; i<str.length(); i++){
        for(int j=i+1; j<str.length()-1; j++){
            if(str[i]==str[j])
                return false;
        }
    }
    return true;
}

// using set, O(n)
bool isUnique1(string str) {
    set<char> letters;
    for(int i=0; i<str.length(); i++){
        if(letters.find(str[i])!= letters.end())
            return false;
        letters.insert(str[i]);
    }
    return true;
}

//O(nlogn)
bool isUnique2(string str){
    sort(str.begin(), str.end());
    for(int i=1;i<str.length(); i++){
        if(str[i]==str[i-1])
            return false;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    string s= "qwertyuioasdfghjklq";

    if(isUnique2(s))
        cout<<"Yes";
    else cout<<"No";
    
    return 0;
}