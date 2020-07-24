#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int G, L;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>G) {
        break;
    }
    while(inFile>>L) {
        break;
    }
    
    inFile.close();
    int total = G + L -1;
    outFile<<total - G<<" ";
    outFile<<total - L<<endl;
    outFile.close();
    return 0;
}
