// https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	long long b = 0;
	long long t = 0;
	cin >> n;
	if(n < 2) {cout << 0; return 0;}
	for(long long i = 0; i < n; i++) {
		long long tmp;
		cin >> tmp;
		if(tmp < b) t += (b-tmp);
		else b = tmp;
	}
	cout << t;
}
