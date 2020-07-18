#include <iostream>
#include <fstream>
using namespace std;
int convertToBinaryandReturnOnesCount(int number) {
    int remainder, countOfOnes = 0;
    while(number > 0){
        remainder = number%2;
        if(remainder == 1)
          countOfOnes++;
        number = number/2;
    }
    return countOfOnes;
}

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    int N, countOfOnes;

   
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>N) {
        break;
    }
    countOfOnes = convertToBinaryandReturnOnesCount(N);
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    outFile<<N + countOfOnes;
    
    outFile.close();
    return 0;
}
