#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    string str;
    int len = 0;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>str) {
        len = str.length();
    }
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    if(len != 5)
    {
        outFile<<"ERROR"<<endl;
    }
    else
    {
        int first = str[0] - 65;
        int second = str[1] - 48;
        int third = str[3] - 65;
        int forth = str[4] - 48;
        if((0 <= first && first <= 7) && (1 <= second && second <= 8) &&
           (0 <= third && third <= 7) && (1 <= forth && forth <= 8) && str[2] == '-')
        {
            if((abs(first - third) == 2 && abs(second - forth) == 1) ||
               (abs(first - third) == 1 && abs(second - forth) == 2))
              outFile<<"YES"<<endl;
            else
              outFile<<"NO"<<endl;
        }
        else
            outFile<<"ERROR"<<endl;
    }
        
    outFile.close();
    return 0;
}
