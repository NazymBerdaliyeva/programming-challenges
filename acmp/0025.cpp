#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    int x, a = 0, b = 0;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>x) {
        a = x;
        break;
    }
    while(inFile>>x) {
        b = x;
    }
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    if(a < b)
        outFile << "<";
    else if(a > b)
        outFile <<">";
    else
        outFile<<"=";
    outFile.close();
    return 0;
}
