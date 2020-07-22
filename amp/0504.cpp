#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    string str = "GCV";
    int K;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>K) {
        break;
    }
    while(K>0) {
        swap(str[1], str[2]);
        swap(str[0], str[1]);
        K--;
    }
    outFile<<str;
    outFile.close();
    return 0;
}
