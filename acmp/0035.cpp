#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int k,m,n;
    vector<int> ms, ns;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>k) {
      break;
    }
    for(int i=0; i< k; i++)
    {
        inFile>>n;
        ns.push_back(n);
        inFile>>m;
        ms.push_back(m);
    }
    inFile.close();
    for(int i=0; i< k; i++)
    {
        long d = 19*ms[i] + (ns[i] + 239)*(ns[i] + 366) / 2;
        outFile<<d<<endl;
    }
    outFile.close();
    return 0;
}

