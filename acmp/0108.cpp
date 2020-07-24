#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    int x, a = 0;;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>x) {
        a = x;
    }
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    outFile << a;
    outFile.close();
    return 0;
}
