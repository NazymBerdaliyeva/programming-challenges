#include <iostream>
#include <unordered_map>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    unordered_map<char,char> mymap = {
        {'q', 'w'}, {'w','e'}, {'e','r'}, {'r','t'},
        {'t', 'y'}, {'y','u'}, {'u','i'}, {'i', 'o'},
        {'o','p'}, {'p','a'}, {'a','s'}, {'s','d'},
        {'d','f'}, {'f','g'}, {'g','h'}, {'h','j'},
        {'j','k'}, {'k','l'}, {'l','z'}, {'z','x'},
        {'x','c'}, {'c','v'}, {'v','b'}, {'b','n'},
        {'n','m'}, {'m','q'}
    };
    char c;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>c) {
      break;
    }
    
    inFile.close();
   
    outFile<<mymap[c];
    outFile.close();
    return 0;
}
