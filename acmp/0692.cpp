#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int N, res = 1;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>N) {
        break;
    }
    inFile.close();
    while(res<N)
    {
        res *= 2;
    }
    if(res == N)
      outFile<<"YES";
    else
      outFile<<"NO";
    outFile.close();
    return 0;
}
