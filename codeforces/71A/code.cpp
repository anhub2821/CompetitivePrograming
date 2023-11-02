// https://codeforces.com/problemset/problem/71/A

#include <string>
#include <iostream>
using namespace std;

string stw(string s) {
	int n = s.size();
	if(n < 11) return s;
	string t = "";
	string tmp = std::to_string(n-2);
	t.push_back(s[0]);
	t.append(tmp);
	t.push_back(s[n-1]);
	return t;
}

int main() {
	int n = 0;
	string s = "";
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		std::cin >> s;
		std::cout << stw(s) << '\n';
		s = "";
	}
}
