#include <iostream>
#include <unordered_map>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    unordered_map<string, bool> mp;
    ofstream outFile("OUTPUT.TXT");
    int n, m;
    string str;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>n) {
        break;
    }
    while(inFile>>m) {
        break;
    }
    while(inFile>>str) {
        break;
    }
    for(int i=0; i < str.length()-m+1; i++)
    {
        string current = str.substr(i, m);
        mp[current] = true;
    }
    
    outFile<<mp.size();
    outFile.close();
    return 0;
}
