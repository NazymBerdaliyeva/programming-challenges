#include <vector>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> elements;
        for (int num : nums) {
            if (++elements[num] > nums.size() / 2) {
                return num;
            }
        }
        return 0;
    }
};