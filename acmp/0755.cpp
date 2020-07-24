#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int X, Y, Z, total = 0;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>X) {
        total = X;
        break;
    }
    while(inFile>>Y) {
        total += Y;
        break;
    }
    while(inFile>>Z) {
        total -= Z;
        break;
    }
    inFile.close();
    if(total >= 0)
        outFile <<total;
    else
        outFile<<"Impossible";
    outFile.close();
    return 0;
}
