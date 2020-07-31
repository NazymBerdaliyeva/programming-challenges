#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    string binary, str = "1", temp, res;
    map<string, char> mp;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>binary) {
      break;
    }
    inFile.close();
    for(int i = 0; i < 26; i++)
    {
        mp[str] = 97 + i;
        str.insert(str.begin(), '0');
    }
    for(int i = 0; i < binary.length(); i++)
    {
        if(binary[i] == '1')
        {
            temp.push_back('1');
            res.push_back(mp[temp]);
            temp = "";
        }
        else
        {
            temp.push_back(binary[i]);
        }
    }
    outFile<<res;
    outFile.close();
    return 0;
}
