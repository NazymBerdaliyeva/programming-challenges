#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int N;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>N) {
        break;
    }
    inFile.close();
    if(N<=2 || N==12)
        outFile<<"Winter";
    else if(N > 2 && N < 6)
        outFile<<"Spring";
    else if(N > 5 && N < 9)
        outFile<<"Summer";
    else if(N > 8 && N < 12)
        outFile<<"Autumn";
    else
        outFile<<"Error";
    
    outFile.close();
    return 0;
}
