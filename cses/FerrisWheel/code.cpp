// https://cses.fi/problemset/task/1090

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	int n, w; cin >> n >> w;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	int s = 0;
	int e = n-1;
	int t = 0;
	while (s <= e) {
		if(a[s] + a[e] <= w) {
			s++;
			e--;
		}
		else {
			e--;
		}
		t++;
	}
	cout << t;
	return 0;
}
