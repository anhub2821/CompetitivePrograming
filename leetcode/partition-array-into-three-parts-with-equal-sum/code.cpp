// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/

#include <bits/stdc++.h>
using namespace std;


bool canThreePartsEqualSum(vector<int>& arr) {
	int n = arr.size()-1;
	vector <int> arrF;
	vector <int> arrL;
	arrF.push_back(0);
	arrL.push_back(0);
	int tmp = 0;
	for(int i = 0; i <= n+1; i++) {
		tmp = 0;
		tmp = arrF[i] + arr[i];
		arrF.push_back(tmp);
	}
	for(int i = n; i >= 0; i--) {
		tmp = 0;
		tmp = arrL[n-i] + arr[i];
		arrL.push_back(tmp);
	}
	for(int i = 1; i <= n; i++)
		for(int j = 1; j<= n; j++)
			if(arrF[i+1] == arrL[j+1]) {
				if(abs(arrF[n-j+1] - arrF[i]) == arrF[i]) {
					cout << i << ' ' << j <<endl;
					return true;
				}
			}
	return false;
}

int main() {
	vector<int> arr = {0,2,1,-6,6,7,9,-1,2,0,1};
	std::cout << canThreePartsEqualSum(arr);
}
