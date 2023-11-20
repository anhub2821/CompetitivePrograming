// https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	bool b[n];
	memset(b, 1, n*sizeof(bool)); // initiate all variables in bool array to true
	
	for(int i = 1; i < n; i++) {
		long long tmp = 0;
		cin >> tmp;
		b[tmp] = 0;
	}
	for(int i = 1; i <= n; i++) {
		if(b[i]) { cout << i; break; }
	}
}
