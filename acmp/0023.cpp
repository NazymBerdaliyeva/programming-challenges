#include <iostream>
#include <fstream>
using namespace std;
int findDividersAndSum(int num)
{
    int sum = 0, reminder;
    for(int i = 1; i <= num/2; i++)
    {
        reminder = num%i;
        if(reminder == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main(int argc, const char * argv[]) {
    ifstream inFile ;
    int N;
    int sum = 0;

    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while(inFile>>N) {
        break;
    }
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    sum = findDividersAndSum(N);
    outFile<<sum + N;
    
    outFile.close();
    return 0;
}
