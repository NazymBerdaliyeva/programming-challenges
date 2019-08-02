class Solution {
public:
    int bitwiseComplement(int N) {
        int res=0, r;
        vector<int> binary;
        if(N==0)
            return 1;
        while(N>0){
            r = N%2;
            binary.push_back(r);
            N=N/2;
        }
        for(int j=0;j<binary.size();j++){
            //cout<<binary[j]<<" ";
            if(binary[j]==0)
                res= res + (pow(2,j));
        }
        return res;
    }
};