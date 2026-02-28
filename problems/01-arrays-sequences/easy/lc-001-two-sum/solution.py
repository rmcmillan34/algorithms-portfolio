# LC-001 Two Sum

from typing import Sequence
from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}

        for idx, num in enumerate(nums):
            complement = target - num
            if not complement in seen:
                seen[num] = idx
            else:
                return [idx, seen[complement]]
