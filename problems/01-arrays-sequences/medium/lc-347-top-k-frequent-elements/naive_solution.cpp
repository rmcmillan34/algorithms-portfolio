class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
    // Build Frequency hash map - O(n)
    unordered_map<int,int> um; 
    for (int x : nums) ++um[x];

    // Create sorted vector by second integer in hash map
    vector<pair<int,int>> v(um.begin(), um.end());
    sort(v.begin(), v.end(),
         [](auto& a, auto& b){ return a.second > b.second; });

    // Build Result
    vector<int> result;
    result.reserve(k);
    for (int i = 0; i < k && i < (int)v.size(); ++i)
        result.push_back(v[i].first);

    return result;
}
};
