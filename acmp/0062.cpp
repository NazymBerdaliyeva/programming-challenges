#include <iostream>
#include <map>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    string pos;
    map<char, int> letters;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    for(int i = 0; i < 8; i++)
    {
        char c = 65 + i;
        letters[c] = i + 1;
    }
        
    while(inFile>>pos) {
        break;
    }
    inFile.close();
    
    if((letters[pos[0]]%2 ==0 && pos[1]%2 ==0) || (letters[pos[0]]%2 == 1 && pos[1]%2 ==1 ))
        outFile<<"BLACK";
    else
        outFile<<"WHITE";
    outFile.close();
    return 0;
}
