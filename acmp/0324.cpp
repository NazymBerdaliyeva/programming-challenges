#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    string number;
    
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>number) {
      break;
    }
    
    inFile.close();
    if(number[0] == number[3] && number[1] == number[2])
        outFile<<"YES";
    else
        outFile<<"NO";
    outFile.close();
    return 0;
}
