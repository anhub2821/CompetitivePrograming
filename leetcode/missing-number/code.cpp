// https://leetcode.com/problems/missing-number/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
	const short int n = nums.size();
	const int tsum = n*(n+1)/2;
	int asum = 0;
	for(int i = 0; i < n; i++) asum += nums[i];
	return tsum-asum;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	vector<int> nums = {1, 0, 3, 4};
	cout << missingNumber(nums);
	return 0;
}
