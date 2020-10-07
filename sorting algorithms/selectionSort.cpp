#include <iostream>
#include <vector>
using namespace std;
  
int findMinIndex(vector<int>& arr, int start) {
    int minIndex = start;
    for(int i = start; i < arr.size(); i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }
    return minIndex;
}
void swap(vector<int>& arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(int argc, const char * argv[])
{
    vector<int> pens = {5, 2, 6, 7, 2, 1, 0, 3};
    for(int i = 0; i < pens.size(); i++) {
        int minIndex = findMinIndex(pens, i);
        
        if (i != minIndex)
            swap(pens, i, minIndex);
    }
    for(int i = 0; i < pens.size(); ++i)
         cout<<pens[i]<<" ";
    cout<<endl;
    return 0;
}
