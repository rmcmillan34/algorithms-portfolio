class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int num : nums) {
            // Insert returns a std::pair<iterator, bool> where .first is iterator
            if (!seen.insert(num).second) return true;
        }
        return false;
    }
};
