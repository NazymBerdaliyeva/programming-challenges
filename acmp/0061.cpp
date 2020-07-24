#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int a, b, scoreA = 0, scoreB = 0;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    for(int i = 1; i<=4; i++)
    {
        while(inFile>>a) {
            scoreA += a;
            break;
        }
        while(inFile>>b) {
            scoreB += b;
            break;
        }
    }
    inFile.close();
    if(scoreA > scoreB)
        outFile <<1;
    else if(scoreA < scoreB)
        outFile << 2;
    else
        outFile<<"DRAW";
    outFile.close();
    return 0;
}
