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
    
    outFile<<"The next number for the number "<<N<<" is "<<N+1<<".\n";
    outFile<<"The previous number for the number "<<N<<" is "<<N-1<<".\n";
    outFile.close();
    return 0;
}
