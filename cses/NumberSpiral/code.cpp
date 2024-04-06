// https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	long long n, x, y, a;
	long long ans;
	cin >> n;
	for(long long i = 0; i < n; i++) {
		cin >> y >> x;
		if(x > y) {
			a = (x-1)*(x-1);
			if(x % 2 == 0) {
				ans = a+y;
			}
			else ans = a+(2*x-y);
		}
		else {
			a = (y-1)*(y-1);
			if(y % 2 == 0) {
				ans = a+(2*y-x);
			}
			else ans = a+x;
		}
		cout << ans << '\n';
	}

	return 0;
}
