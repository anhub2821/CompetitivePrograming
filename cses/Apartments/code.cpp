// https://cses.fi/problemset/task/1084/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen ("test_input.txt","r",stdin);
	long long n, m, k;
	cin >> n >> m >> k;
	vector<long long> a(n);
	vector<long long> b(m);
	for(long long i = 0; i < n; ++i) cin >> a[i];
	for(long long i = 0; i < m; ++i) cin >> b[i];
	//fclose (stdin);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	long long i = 0, j = 0, t = 0;
	while(i < n) {
		while(j < m && b[j] - a[i] > k)
			j++;
		if(abs(a[i]-b[j]) <= k) { i++; j++; t++; }
		else i++;
	}
	cout << t;
	return 0;
}
