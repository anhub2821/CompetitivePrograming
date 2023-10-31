// https://leetcode.com/problems/longest-common-prefix/

#include <bits/stdc++.h>
using namespace std;

// complexity: O(n^3)
// memory: O(1)
int minimumSum(vector<int>& nums) {
	int n = nums.size();
	int m = INT_MAX;
	for(int i = 0; i < n-2; i++)
		for(int j = i+1; j < n-1; j++)
			for(int k = j+1; k < n; k++)
				if(nums[i] < nums[j] && nums[k] < nums[j] && nums[i]+nums[j]+nums[k] < m)
					m = nums[i]+nums[j]+nums[k];
	if(m == INT_MAX) return -1;
	return m;
}

int main() {
	vector<int> te = {8, 6, 1, 5, 3};
	std::cout << minimumSum(te);
}
