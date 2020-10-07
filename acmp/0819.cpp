#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    long long int a, b, c;
    long long int V, S;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>a) {
      break;
    }
    while(inFile>>b) {
      break;
    }
    while(inFile>>c) {
      break;
    }
    
    inFile.close();
    V = a * b * c;
    S = 2*a * b + 2*b * c + 2*a * c;
    outFile<<S<<" "<<V;
    outFile.close();
    return 0;
}
