#include <iostream>
#include <fstream>
using namespace std;
int onesCount(int N)
{
    int count = 0;
    while(N > 0) {
        if(N%2 == 1)
            count++;
        N /= 2;
    }
    return count;
}

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
    int res = onesCount(N);
    outFile<<res;
    outFile.close();
    return 0;
}
