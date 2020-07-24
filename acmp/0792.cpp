#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    string str = "GCV";
    int N1, N2, P1, P2;
    int sum1 = 0, sum2 = 0;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>N1) {
        break;
    }
    while(inFile>>P1) {
        break;
    }
    while(inFile>>N2) {
        break;
    }
    while(inFile>>P2) {
        break;
    }
    
    while(N1 > 0)
    {
        sum1 += N1%P1;
        N1 = N1/P1;
    }
    while(N2 > 0)
    {
        sum2 += N2%P2;
        N2 = N2/P2;
    }
    if(sum1 == sum2)
        outFile<<sum1;
    else
        outFile<<0;
    outFile.close();
    return 0;
}
