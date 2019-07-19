//Relative Sort Array_1122

class Solution {
public:
    vector<int> searchList(vector<int>& arr1, int findFor){
        vector<int> res;
        int size = arr1.size();
        for(int i=0;i<size;i++){
            if(arr1[i] == findFor){
                res.push_back(arr1[i]);
               arr1[i]=-1;
            }
        }
        return res;
    }
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)     {
        vector<int> result, temp,rest;
        int sizeA2 = arr2.size(),sizeA1 = arr1.size();
        for(int i=0; i < sizeA2; i++){
            temp = searchList(arr1,arr2[i]);
            if(!temp.empty()){
                 result.insert(result.end(), temp.begin(), temp.end());
            }
        }
        sort(arr1.begin(), arr1.end());
        for(int j = 0;j<sizeA1; j++){
            if(arr1[j] != -1)
                result.push_back(arr1[j]);
        }
        return result;
    }
};