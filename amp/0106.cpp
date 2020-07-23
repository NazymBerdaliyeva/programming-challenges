#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int n, coin;
    vector<int> a;
    int zeros = 0, ones = 0;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>n) {
        break;
    }
    cout<<n;
    for(int i=0; i < n;i++)
    {
        inFile>>coin;
        a.push_back(coin);
    }
    for(int i=0; i < n; i++)
    {
        if(a[i] == 0)
            zeros ++;
        else
            ones++;
    }
    if(zeros < ones)
      outFile<<zeros;
    else
      outFile<<ones;
    outFile.close();
    return 0;
}
