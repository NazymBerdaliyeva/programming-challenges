#include <iostream>
#include <fstream>
#define PI 3.14159265359
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int W, H, R;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>W) {
        break;
    }
    while(inFile>>H) {
        break;
    }
    while(inFile>>R) {
        break;
    }
    inFile.close();
    int D = R + R;
    if(D <= W && D <= H)
      outFile<<"YES";
    else
      outFile<<"NO";
    outFile.close();
    return 0;
}
