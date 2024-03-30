// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative

#include <bits/stdc++.h>
using namespace std;

int findMaxK(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int f = 0;
	int l = nums.size()-1;
	while(f < l) {
		if(nums[f] + nums[l] == 0) return nums[l];
		else if(nums[f] + nums[l] > 0) l--;
		else f++;
	}
	return -1;
}

int main() {
	vector<int> nu = {-10,8,6,7,-2,-3};
    ios_base::sync_with_stdio(0); cin.tie(0);
	cout << findMaxK(nu);
	return 0;
}
