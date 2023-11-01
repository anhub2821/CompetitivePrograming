// https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
	int a = 0;
	int b = 0;
	int c = 0;
	map<char, int> k;
	for(int i = 0; i < s.size(); i++) {
		k[s[i]] += 1;
	}
	return false;
}   

int main() {
	isValid("{(})[]");
}
