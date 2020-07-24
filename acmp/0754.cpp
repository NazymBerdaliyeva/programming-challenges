#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int M1, M2, M3, max;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>M1) {
        break;
    }
    while(inFile>>M2) {
        break;
    }
    if(M1 < M2)
        max = M2;
    else
        max = M1;
    while(inFile>>M3) {
        break;
    }
    inFile.close();
    if(max < M3)
    {
        max = M3;
    }
    if (M1>=94 && M1<=727 &&
       M2>=94 && M2<=727 &&
        M3>=94 && M3<=727)
    {
      if(94 < max && max < 727)
        outFile<<max;
    }
    else
      outFile<<"Error";
    outFile.close();
    return 0;
}
