// https://leetcode.com/problems/majority-element/

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
	map<int, int> cNums;
	for(int i = 0; i < nums.size(); i++) {
		cNums[nums[i]]++;
	}
	int maxV = 0;
	for (map<int, int>::iterator it = cNums.begin(); it != cNums.end(); it++) {
		if (maxV < it->second)
			maxV = it->second;
	}
	return maxV;
}

int main() {
}
