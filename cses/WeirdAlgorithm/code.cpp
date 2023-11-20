// https://cses.fi/problemset/task/1068/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	while(n != 1) {
		cout << n << ' ';
		if(n % 2 == 0) {
			n /= 2;
			continue;
		}
		n *= 3;
		n += 1;
	}
	cout << n << ' ';
}
