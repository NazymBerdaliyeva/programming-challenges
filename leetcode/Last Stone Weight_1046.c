class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int i = stones.size()-1, max1,max2;
        bool deleted = false;
        while(stones.size() > 1)
        {
          sort(stones.begin(), stones.end());
           max1 = stones[i];
           max2 = stones[i-1];
           if(max1 == max2){
               cout<<" max1="<<max1<<" max2="<<max2<<" ";
               if(i==1){
                  stones[0]=0;
                   break;
               }
                   
               stones.pop_back();
               stones.pop_back();
               deleted =true;
               
          }
            else{
                stones[i-1] = abs(max1 - max2);
                stones.pop_back();
               cout<<stones[i-1]<<" ";
                deleted=false;
            }
            if(deleted)
                i-=2;
            else{
                 i--;
            //   cout<<"i= "<<i<<"here";
               //cout<<" size= "<<stones.size();
            }
               
        }
        for(int i=0; i<stones.size();i++)
            cout<<stones[i]<<" ";
        return stones[0];
    }
};