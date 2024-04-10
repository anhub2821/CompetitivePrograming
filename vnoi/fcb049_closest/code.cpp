// https://oj.vnoi.info/problem/fcb049_closest

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m, l, r;
	cin >> n >> m;
	int a[n+1];
	vector <int> p;
	vector <int> t;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <  n-1; i++)
	for(int j = i+1; j <= n; j++){
		if(a[i] == a[j]) {
			p.push_back(i);
			t.push_back(j);
			break;
		}
	}
	int ans, min;
	for(int j = 0; j < p.size(); j++) cout << t[j] << ' ' << p[j] << '\n';
	for(int i = 0; i < m; ++i){
		ans = -1;
		min = 1000000007;
		cin >> l >> r;
		for(int j = 0; j < p.size(); j++)
			if(l <= p[j] && r >= t[j] && min >= t[j]-p[j]) {
				ans=t[j]-p[j];
				min = ans;
				break;
			}
		cout << ans << '\n';
	}

	return 0;
}
