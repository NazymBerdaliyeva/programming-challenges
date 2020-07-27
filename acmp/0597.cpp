#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int r1, r2, r3;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>r1) {
        break;
    }
    while(inFile>>r2) {
        break;
    }
    while(inFile>>r3) {
        break;
    }
    inFile.close();

    if(r1 >= r2 + r3)
        outFile<<"YES";
    else
        outFile<<"NO";
    
    outFile.close();
    return 0;
}
