#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int N, a, b;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>N) {
        break;
    }
    while(inFile>>a) {
        break;
    }
    while(inFile>>b) {
        break;
    }
    
    inFile.close();
    outFile<<N*2*a*b;
    outFile.close();
    return 0;
}
