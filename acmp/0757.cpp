#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    long long a, b, c;
    long long a1, b1, c1;
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
    a1 = a/2;
    b1 = b/6;
    c1 = c/1;
    long long minn = min(a1,min(b1,c1));
    outFile<<minn;
    outFile.close();
    return 0;
}
