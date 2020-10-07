#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int S, sum = 0, i = 1;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>S) {
        break;
    }
    inFile.close();
    while(sum < S)
    {
        sum = i + i + 2*(i + i);
        if(sum == S)
        {
            outFile<<i<<" "<< 2*(i + i)<<" "<<i;
            break;
        }
        i++;
    }
    
    outFile.close();
    return 0;
}
