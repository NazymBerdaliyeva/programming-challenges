#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    ofstream outFile("OUTPUT.TXT");
    int year;
    bool isVysokosniy = false;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>year) {
        break;
    }
    inFile.close();
    if(((year%4 == 0 && year%100 != 0) || year%400 == 0))
        isVysokosniy = true;
    string yearInStr = "";
    if(year < 10)
    {
      yearInStr += "000";
    }
    else if(9 < year && year < 100){
      yearInStr += "00";
    }
    else if(99 < year && year < 1000){
      yearInStr += "0";
    }
    yearInStr += to_string(year);
        
    if(isVysokosniy)
    {
        outFile<<"12/09/"<<yearInStr;
    }
    else
    {
        outFile<<"13/09/"<<yearInStr;
    }
    outFile.close();
    return 0;
}
