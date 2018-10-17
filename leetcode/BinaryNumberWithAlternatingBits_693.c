class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool result=false;
        int flag=0,size;
        vector<int> binarybits;
        while(n>0)
        {
            binarybits.push_back(n%2);
            n/=2;
        }
        size = binarybits.size();
        for(int i=0;i<size-1;i++){
            if(binarybits[i]!=binarybits[i+1])
                continue;
            else
                flag++;
        }
        if(flag==0)
            result=true;
        return result;
    }
};