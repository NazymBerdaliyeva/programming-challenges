#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int guests;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>guests) {
        break;
    }
    inFile.close();
    if(guests == 1)
        outFile<<0;
    else
    {
        int cuts = guests % 2;
        if(cuts == 0)
            outFile << guests/2;
        else
            outFile << guests;
    }
    
    outFile.close();
    return 0;
}
