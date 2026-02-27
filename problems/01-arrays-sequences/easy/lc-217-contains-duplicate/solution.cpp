class Solution {
  public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        // Perform bitwise XOR (ans XOR nums[i])
        for(int x : nums) ans ^= x;           
        return ans;
    }
}
