#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int N, k;
    vector<int> arr;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>N) {
        break;
    }
    while(inFile>>k) {
        arr.push_back(k);
    }
    inFile.close();

    for(int i = N-1; i >= 0; i--)
        outFile<<arr[i]<<" ";
    outFile.close();
    return 0;
}
