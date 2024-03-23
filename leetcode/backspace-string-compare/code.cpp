// https://leetcode.com/problems/backspace-string-compare

#include <bits/stdc++.h>
using namespace std;

stack<char> Backspace(string s) {
	stack<char>ss;
	int ns = s.size()-1;
	unsigned short int c = 0;
	for(int i = ns; i >= 0; i--) {
		while(s[i] == '#'){
			c++;
			if(i == 0) break;
			i--;
		}
		if(c <= 0) ss.push(s[i]);
		if(c > 0 && c-i <= 0) c--;
	}
	return ss;
}

bool checkIsMatch(stack<char>& st, stack<char>& ss) {
	while(!ss.empty() && !st.empty()) {
		if(ss.top() == st.top()) {
			ss.pop(); st.pop();
		}
		else return false;
	}
	if(!ss.empty() || !st.empty()) return false;
	return true;
}

bool backspaceCompare(string s, string t) {
	stack<char>ss = Backspace(s);
	stack<char>st = Backspace(t);
	return checkIsMatch(st, ss);
}


int main() {
	cout << backspaceCompare("ac", "#as#c");
}
