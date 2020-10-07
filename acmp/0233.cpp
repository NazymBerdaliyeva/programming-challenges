#include <iostream>
#include <fstream>
#define bus 437
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int N, b, index = 1;
    bool isCrash = false;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>N) {
        break;
    }
    while(inFile>>b) {
        if(bus >= b)
        {
            isCrash = true;
            outFile<<"Crash "<<index;
            break;
        }
            
        index++;
    }
    if(!isCrash)
      outFile<<"No crash";
    outFile.close();
    return 0;
}
