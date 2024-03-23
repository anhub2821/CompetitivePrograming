// https://leetcode.com/problems/ugly-number/

#include <bits/stdc++.h>
using namespace std;

bool isUgly(int n) {
	if (n < 1) return false;
	if (n == 1) return true;
    while(n != 1) {
		if(n % 2 == 0) n /= 2;
		else if(n % 3 == 0) n /= 3;
		else if(n % 5 == 0) n /= 5;
		else return false;
	}
	return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	cout << isUgly(14);
	return 0;
}
