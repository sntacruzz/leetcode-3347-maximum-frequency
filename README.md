# 🧠 LeetCode 3347 — Maximum Frequency of an Element After Performing Operations II

[![GitHub stars](https://img.shields.io/github/stars/sntacruz/leetcode-3347-maximum-frequency?style=social)](https://github.com/sntacruz/leetcode-3347-maximum-frequency/stargazers)
[![GitHub contributors](https://img.shields.io/github/contributors/sntacruz/leetcode-3347-maximum-frequency)](https://github.com/sntacruz/leetcode-3347-maximum-frequency/graphs/contributors)
[![GitHub license](https://img.shields.io/github/license/sntacruz/leetcode-3347-maximum-frequency)](./LICENSE)
![GitHub repo size](https://img.shields.io/github/repo-size/sntacruz/leetcode-3347-maximum-frequency)
![Languages](https://img.shields.io/github/languages/top/sntacruz/leetcode-3347-maximum-frequency?color=blue)

---

### 📘 Overview
This repository contains clean implementations (C++ and Python) for the **LeetCode 3347** problem:  
**“Maximum Frequency of an Element After Performing Operations II.”**

---

## 🧩 Problem
You are given an integer array `nums` and two integers `k` and `numOperations`.  
Each operation picks an index not chosen before and adds an integer in range `[-k, k]` to that element.  
You must perform `numOperations` operations.  
Return the **maximum possible frequency** of any element in `nums` after the operations.

---

## 💡 Approach
Sort + candidate enumeration + binary search.  
Try candidates `nums[i]`, `nums[i]-k`, and `nums[i]+k` (deduplicated).  
For each candidate `m`, compute the window of elements that can reach `m` using binary search on sorted `nums`.  

Formula:
f(m) = min(window_size, freq[m] + numOperations)

---

## 📂 Files
| File | Description |
|------|--------------|
| [`cpp/maximum_frequency_operations_ii.cpp`](./cpp/maximum_frequency_operations_ii.cpp) | C++ implementation |
| [`python/maximum_frequency_operations_ii.py`](./python/maximum_frequency_operations_ii.py) | Python implementation |

---

## 🧑‍💻 Contributing
We welcome contributions!  
See [CONTRIBUTING.md](./CONTRIBUTING.md) for rules and branch naming conventions.

---

## ⚙️ License
This project is licensed under the [MIT License](./LICENSE).

---

## 🌐 Connect with Me

[![X (Twitter)](https://img.shields.io/badge/X_(Twitter)-000000?style=for-the-badge&logo=x&logoColor=white)](https://x.com/fauznahl_)
[![Telegram](https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white)](https://t.me/cruzlvo)
[![Farcaster](https://img.shields.io/badge/Farcaster-6A00FF?style=for-the-badge&logo=farcaster&logoColor=white)](https://warpcast.com/cruzlv)

⭐ **Follow for more open-source LeetCode projects and Web3 experiments.**
