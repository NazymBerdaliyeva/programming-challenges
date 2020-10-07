#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int n, t;
    vector<int> a;
    int teams, sum = 0;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>n) {
        break;
    }
    for(int i=0; i < n;i++)
    {
        inFile>>t;
        a.push_back(t);
    }
    while(inFile>>teams) {
        break;
    }
    for(int i=0; i < n; i++)
    {
        if(a[i] <= teams)
            sum += a[i];
        else
            sum += teams;
    }
    
    outFile<<sum;
    outFile.close();
    return 0;
}
