// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	const int n = s.size();
	if(n == 1) {cout << 1; return 0;}
	int t = 1;
	int m = 0;
	for(int i = 0; i < n-1; i++) {
		if(s[i] == s[i+1]) {
			t++;
		}
		else {
			t = 1;
		}
		if(t > m) m = t;
	}
	cout << m;
}
