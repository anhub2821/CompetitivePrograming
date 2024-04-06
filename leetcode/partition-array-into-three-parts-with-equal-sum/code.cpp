// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/

#include <bits/stdc++.h>
using namespace std;

bool canThreePartsEqualSum(vector<int>& arr) {
	const int n = arr.size()-1;
	int ss[n];
	int se[n];
	ss[0] = arr[0];
	se[0] = arr[n];
	for(int i = 1; i <= n; i++) ss[i] = ss[i-1]+arr[i];
	for(int i = n-1; i >= 0; i--) se[n-i] = se[n-i-1]+arr[i];
	for(int i = 0; i < n-2; i++)
	for(int j = 0; j < n-2; j++) {
		if(ss[i] == se[j]) {
		}
	}

	for(int i = 0; i <= n; i++) cout << ss[i] << ' ' << se[i] << '\n';
	return false;
}

int main() {
	vector<int> arr = {0,2,1,-6,6,-7,9, 1,2,0,1};
	// 0 2 1 -6  6 -7  9  1 2 0 1
	std::cout << canThreePartsEqualSum(arr);
}
