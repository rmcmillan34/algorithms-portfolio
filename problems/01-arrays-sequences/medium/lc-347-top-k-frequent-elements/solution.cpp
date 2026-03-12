#include <vector>
#include <unordered_map>
#include <queue>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
        // Step 1: Build frequency hash map - O(n)
        unordered_map<int, int> um; 
        for (int x : nums) ++um[x];

        // Step 2: Use a min-heap to store the k most frequent elements
        // Priority queue will store pairs of <frequency, number>
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        
        // Step 3: Iterate through the frequency map and manage the heap
        for (auto& entry : um) {
            minHeap.push({entry.second, entry.first}); // push frequency and number into heap
            if (minHeap.size() > k) {
                minHeap.pop(); // Remove the least frequent element if heap exceeds size k
            }
        }

        // Step 4: Build the result array
        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second); // Get the element (not the frequency)
            minHeap.pop(); // Remove it from the heap
        }

        return result;
    }
};
