class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        if(numbers.empty() || numbers.size()<2)
           return result;
        int left = 0, right = numbers.size() - 1;
        while(left < right){
            if(numbers[left] + numbers[right] == target){
                result.push_back(left+1);
                result.push_back(right+1);
                return result;
            }
            else if(numbers[left] + numbers[right] > target)
                right -= 1;
            else
                left +=1;
        }
        return result;
    }
};