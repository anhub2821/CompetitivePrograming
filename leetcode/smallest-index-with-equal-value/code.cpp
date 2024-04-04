// https://leetcode.com/problems/smallest-index-with-equal-value

#include <bits/stdc++.h>
using namespace std;

int smallestEqual(vector<int>& nums) {
	const int n = nums.size();
	for(int i = 0; i < n; i++) {
		if(i%10  == nums[i]) return i;
	}
	return -1;
}

int main() {
	vector<int> nums = {4,3,2,1};
	cout << smallestEqual(nums);
	return 0;
}
