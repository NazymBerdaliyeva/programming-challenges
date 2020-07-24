#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    ifstream inFile ;
    int x;
    vector<int> arr, res;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>x) {
        arr.push_back(x);
    }
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];
    int d = arr[3];
    
    for (int i = -100; i <= 100; i++){
        if ((a * pow(i, 3) + b * pow(i, 2) + c * i + d) == 0) {
            res.push_back(i);
        }
    }
    sort(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++){
        outFile << res[i]<<" ";
    }
    outFile<<"\n";
    outFile.close();
    return 0;
}
