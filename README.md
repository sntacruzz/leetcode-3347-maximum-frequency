# leetcode-3347-maximum-frequency
Solutions for LeetCode 3347 — C++ and Python. Codespaces-ready
# LeetCode 3347 — Maximum Frequency of an Element After Performing Operations II


This repository contains implementations (C++ and Python) for LeetCode problem **3347**.


## Problem
Given integer array `nums` and integers `k` and `numOperations`, each operation picks an index not chosen before and adds an integer in range `[-k, k]` to that element. Perform `numOperations` times. Return maximum possible frequency of any element after operations.


## Approach
Sort + candidate enumeration + binary search.
Try candidates `nums[i]`, `nums[i]-k`, `nums[i]+k` (deduplicated). For each candidate `m`, compute window of elements that can reach `m` using binary search on sorted `nums`. Answer for `m` = `min(window_size, freq[m] + numOperations)`.


## Files
- `cpp/maximum_frequency_operations_ii.cpp` — C++ implementation
- `python/maximum_frequency_operations_ii.py` — Python implementation


## Contributing
See `CONTRIBUTING.md`.


## License
This project is licensed under the MIT License.