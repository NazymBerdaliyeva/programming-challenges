#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    int N, M, K, total;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>N) {
        break;
    }
    while(inFile>>M) {
        break;
    }
    while(inFile>>K) {
        break;
    }
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    total = N * M;
    if(total >= K)
        outFile<<"YES";
    else
        outFile<<"NO";
    outFile.close();
    return 0;
}
