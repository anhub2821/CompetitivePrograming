// https://leetcode.com/problems/remove-element

#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
	int n = nums.size();
	for(int i = 0; i < n; i++)
		if(nums[i] == val) {nums.erase(nums.begin()+i); n--; i--;}
	return n;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	// your code start here
	vector<int> nums = {0,1,2,2,3,0,4,2};
	cout << removeElement(nums, 2);
	return 0;
}
