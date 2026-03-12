import collections
import heapq

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
    # Count the frequency of each element
        freq_map = collections.Counter(nums)
    
        # Use a min-heap to store the top k frequent elements
        min_heap = []
        for num, count in freq_map.items():
            heapq.heappush(min_heap, (count, num))
            if len(min_heap) > k:
                heapq.heappop(min_heap)
    
        # Extract the top k elements
        return [num for count, num in min_heap]
