// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <bits/stdc++.h>
using namespace std;
// dumb solution
int removeDuplicates(vector<int>& nums) {
	int e = nums.front();
	vector<int> a;
	const int n = nums.size();
	unsigned short int d = 1;
	a.push_back(e);
	for(int i = 0; i < n; i++) {
		if(e != nums[i]) { e = nums[i]; a.push_back(e); d++;}
	}
	a.swap(nums);
	return d;
}

// not work yet, i'm lazy
int removeDuplicatesFix(vector<int>& nums) {
	int e = 0;
	int d = 0;
	for(int i = 0; i < nums.size(); i++) {
		while(e == nums[i]) nums.erase(nums.begin()+i);
		while(e != nums[i]) {
			e = nums[i];
			d++;
		}
	}
	for(int i = 0; i < nums.size(); i++) cout << nums[i] << ' ';
	cout << '\n';
	return d;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	vector<int> nums = {1, 2, 3, 3, 4, 4};
	cout << removeDuplicates(nums);
	return 0;
}
