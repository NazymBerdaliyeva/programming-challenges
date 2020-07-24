#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    int len = 0, x;
    vector<int> arr;
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
    
    if(arr[0] * arr[1] == arr[2])
         outFile<<"YES"<<endl;
    else
        outFile<<"NO"<<endl;
       
    outFile.close();
    return 0;
}
