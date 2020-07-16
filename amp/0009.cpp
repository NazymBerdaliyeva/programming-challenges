#include <iostream>
#include <fstream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    int x, len;
    int maxx, minn, maxIndx= 0, minIndx = 0, sum = 0, mult = 1;
    vector<int> arr;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>x) {
        len = x;
        break;
    }
    while(inFile>>x) {
        arr.push_back(x);
    }
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    maxx = arr[0];
    minn = arr[0];
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > 0)
            sum += arr[i];
        if(maxx < arr[i]){
            maxx = arr[i];
            maxIndx = i;
        }
        if(minn > arr[i]){
           minn = arr[i];
           minIndx = i;
        }
    }
    if(maxIndx > minIndx)
    {
        for(int i = minIndx + 1; i < maxIndx; i++)
           {
               mult *= arr[i];
           }
    }
    else
    {
        for(int i = maxIndx + 1; i < minIndx; i++)
           {
               mult *= arr[i];
           }
    }
   
    outFile<<sum<<" "<< mult;
    outFile.close();
    return 0;
}
