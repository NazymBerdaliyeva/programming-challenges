#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int a1, a2, a3;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>a1) {
        break;
    }
    while(inFile>>a2) {
        break;
    }
    while(inFile>>a3) {
        break;
    }
    
    if(a1+a2 == a3 || a1+a3 == a2 || a2+a3 == a1)
        outFile<<"YES";
    else
        outFile<<"NO";
    outFile.close();
    return 0;
}
