#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
int maxFrequency(vector<int>& nums, int k, int numOperations) {
int n = nums.size();
if (n == 0) return 0;
sort(nums.begin(), nums.end());


// frequency map
unordered_map<long long,int> freq;
freq.reserve(n*2);
for (int v : nums) freq[v]++;


// candidates: nums[i], nums[i]-k, nums[i]+k
vector<long long> cand;
cand.reserve(3*n);
for (long long v : nums) {
cand.push_back(v);
cand.push_back(v - k);
cand.push_back(v + k);
}
sort(cand.begin(), cand.end());
cand.erase(unique(cand.begin(), cand.end()), cand.end());


int ans = 0;
for (long long m : cand) {
long long lo = m - k;
long long hi = m + k;
auto itL = lower_bound(nums.begin(), nums.end(), (int)lo);
auto itR = upper_bound(nums.begin(), nums.end(), (int)hi);
int window = int(itR - itL);
if (window == 0) continue;
int f = 0;
auto itf = freq.find(m);
if (itf != freq.end()) f = itf->second;
int possible = min(window, f + numOperations);
ans = max(ans, possible);
if (ans == n) return n;
}
return ans;
}
};


// For local testing (not used in LeetCode's submission format)
int main() {
vector<int> nums = {1,4,5};
int k = 1, ops = 2;
Solution s;
cout << s.maxFrequency(nums, k, ops) << "\n"; // expect 2
return 0;
}