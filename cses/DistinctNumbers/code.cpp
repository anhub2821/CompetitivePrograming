// https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map <int, int> x;
	int tmp;
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		x[tmp]++;
	}
	cout << x.size();

}
