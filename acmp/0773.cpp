#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int K, M;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>K) {
        break;
    }
    while(inFile>>M) {
        break;
    }
    
    inFile.close();
    outFile<<K*K*M;
    outFile.close();
    return 0;
}
