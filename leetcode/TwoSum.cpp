class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int low=0, high=nums.size()-1;
        vector<int> result;
        while(low < high){
            if(target-nums[high] != nums[low]){
                low++;
            } else {
                result.push_back(low);
                result.push_back(high);
                return result;
            }
            if(low==high) {
                high--;
                low=0;
            }
        }       
    return result;
    }
};