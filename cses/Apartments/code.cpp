// https://cses.fi/problemset/task/1084/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen ("test_input.txt","r",stdin);
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> a(n);
	vector<ll> b(m);
	for(ll i = 0; i < n; ++i) cin >> a[i];
	for(ll i = 0; i < m; ++i) cin >> b[i];
	//fclose (stdin);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ll i = 0, j = 0, t = 0;
	while(i < n) {
		while(j < m && b[j] - a[i] > k)
			j++;
		if(abs(a[i]-b[j]) <= k) { i++; j++; t++; }
		else i++;
	}
	cout << t;
	return 0;
}
