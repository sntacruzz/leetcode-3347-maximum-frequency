from typing import List
from collections import Counter
import bisect


class Solution:
def maxFrequency(self, nums: List[int], k: int, numOperations: int) -> int:
n = len(nums)
if n == 0:
return 0
nums.sort()
freq = Counter(nums)


cand = set()
for v in nums:
cand.add(v)
cand.add(v - k)
cand.add(v + k)


ans = 0
for m in cand:
lo = m - k
hi = m + k
l = bisect.bisect_left(nums, lo)
r = bisect.bisect_right(nums, hi)
window = r - l
if window == 0:
continue
f = freq.get(m, 0)
possible = min(window, f + numOperations)
ans = max(ans, possible)
if ans == n:
return n
return ans


# local quick test
if __name__ == '__main__':
s = Solution()
print(s.maxFrequency([1,4,5], 1, 2)) # expect 2