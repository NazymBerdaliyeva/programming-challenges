class Solution {
public:
    int findComplement(int num) {
        int sum = 0;
        vector<int> binary;
        if(num==0){
            binary.push_back(num);
        }
        while(num>0){
            int number = num%2;
            binary.push_back(number);
            num = num/2;
        }
        for(int j=binary.size()-1; j>=0;j--){
            if(binary[j]==1)
                binary[j]=0;
            else{
                binary[j]=1;
                sum +=(pow(2,j)*binary[j]);
            }
        }
        return sum;
    }
};