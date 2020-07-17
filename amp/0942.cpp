#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void merge(vector<int> &Arr, int start, int mid, int end) {
    // create a temp array
    int temp[end - start + 1];

    // crawlers for both intervals and for temp
    int i = start, j = mid+1, k = 0;

    // traverse both arrays and in each iteration add smaller of both elements in temp
    while(i <= mid && j <= end) {
        if(Arr[i] <= Arr[j]) {
            temp[k] = Arr[i];
            k += 1; i += 1;
        }
        else {
            temp[k] = Arr[j];
            k += 1; j += 1;
        }
    }

    // add elements left in the first interval
    while(i <= mid) {
        temp[k] = Arr[i];
        k += 1; i += 1;
    }

    // add elements left in the second interval
    while(j <= end) {
        temp[k] = Arr[j];
        k += 1; j += 1;
    }

    // copy temp to original interval
    for(i = start; i <= end; i += 1) {
        Arr[i] = temp[i - start];
    }
}

void mergeSort(vector<int> &Arr, int start, int end) {

    if(start < end) {
        int mid = (start + end) / 2;
        mergeSort(Arr, start, mid);
        mergeSort(Arr, mid+1, end);
        merge(Arr, start, mid, end);
    }
}

int main(int argc, const char * argv[]) {
    ifstream inFile ;
    int len, x, sum = 0, total5thTime = 0, total3rdTime = 0, total1stTime = 0;
    vector<int> time;
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
        time.push_back(x);
    }
    inFile.close();
    
    ofstream outFile("OUTPUT.TXT");
    for(int i = 0; i < time.size(); i++)
    {
        sum += time[i];
        total5thTime += sum;
    }
    sum = 0;
    for(long i = time.size() - 1; i >= 0; i--)
    {
        sum += time[i];
        total3rdTime += sum;
    }
    sum = 0;
    mergeSort(time, 0, len-1);
    for(int i = 0; i < time.size(); i++)
    {
        sum += time[i];
        total1stTime += sum;
    }
    
    if((total5thTime == total3rdTime && total3rdTime == total1stTime) || (total3rdTime > total1stTime && total1stTime < total5thTime) || (total1stTime == total5thTime && total5thTime < total3rdTime) || (total1stTime == total3rdTime && total3rdTime < total5thTime))
        outFile<<1;
    else if((total5thTime == total3rdTime && total3rdTime < total1stTime) || (total5thTime > total3rdTime && total3rdTime < total1stTime) || (total1stTime == total3rdTime && total3rdTime < total5thTime))
        outFile<<3;
    else
        outFile<<5;
    outFile.close();
    return 0;
}
