#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int K, N;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>K) {
        break;
    }
    while(inFile>>N) {
        break;
    }
    if(K >= N)
    {
        outFile<<1<<" "<<N;
    }
    else
    {
        int page = N%K;
        if(page==0)
        {
            outFile<<N/K<<" "<<K;
        }
        else
        {
            outFile<<N/K+1<<" "<<N%K;
        }
        
    }
    outFile.close();
    return 0;
}
