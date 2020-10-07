#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    int x, i = 0, maxx, minn;
    int arr[3];
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
    maxx = arr[0];
    minn = arr[0];
    for(int i = 0; i< 3; i++){
        if(maxx < arr[i])
            maxx = arr[i];
        if(minn > arr[i])
            minn = arr[i];
    }
    outFile << maxx - minn;
    outFile.close();
    return 0;
}
