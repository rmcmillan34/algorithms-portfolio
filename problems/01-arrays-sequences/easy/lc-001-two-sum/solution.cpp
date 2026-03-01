/*
* LC-001 - Two Sum
*
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;

        for (int i=0; i<nums.size(); i++) {
            int complement = target - nums[i];
            
            if (!seen.contains(complement)) {
                seen.insert({nums[i], i});
            }
            else {
                return std::vector {i, seen[complement]};
            }
        }
        return {};
    }
};
