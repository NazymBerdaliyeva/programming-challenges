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
    ofstream outFile("OUTPUT.TXT");
    int n, size, i = 0;
    int sum = 0, count = 0;
    vector<int> rubs, kgs;
    inFile.open("INPUT.TXT");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while(inFile>>n) {
        count++;
        rubs.push_back(n);
        if(count == 3)
            break;
    }
    while(inFile>>n) {
        kgs.push_back(n);
    }
    inFile.close();
    mergeSort(rubs, 0, 2);
    mergeSort(kgs, 0, 2);
    for(i = 0; i < 3; i++)
    {
        sum += rubs[i]*kgs[i];
    }
    outFile<<sum;
    
    outFile.close();
    return 0;
}
