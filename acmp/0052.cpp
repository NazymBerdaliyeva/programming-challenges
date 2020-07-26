#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int N;
    int a,b,c,d,e,f;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>N) {
        break;
    }
    inFile.close();

    a = N/100000;
    b = N%100000/10000;
    c = N%10000/1000;
    d = N%1000/100;
    e = (N%100)/10;
    f = N%10;
    
    if((a + b + c) == (d + e + f))
        outFile<<"YES";
    else
        outFile<<"NO";
    outFile.close();
    return 0;
}
