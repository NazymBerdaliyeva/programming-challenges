#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    string x, maxStr;
    int i = 0;
    long maxx;
    string arr[3];
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>x) {
        arr[i] = x;
        i++;
    }
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    maxx = arr[0].length();
    maxStr = arr[0];
    for(i = 1; i< 3; i++){
        string cur = arr[i];
        unsigned long long curL = arr[i].length();
        if(maxx < curL)
        {
            maxStr = cur;
            maxx = curL;
        }
        else if(maxx == curL)
        {
            for(int j = 0; j < maxx; j++)
            {
                if((maxStr[j] - 48) < (cur[j] - 48))
                {
                    maxx = curL;
                    maxStr = cur;
                    break;
                }
            }
        }
    }
    outFile<<maxStr;
    outFile.close();
    return 0;
}
