class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for(int i=0; i< len-1; i++){
            if(nums[i]==nums[i+1]){
                res.push_back(nums[i]);
                break;
            }
        }
        for(int i=0; i< len; i++){
            if(find(nums.begin(), nums.end(), i+1) == nums.end()) {
                res.push_back(i+1);
                break;
            }
        }
        return res;
    }
}