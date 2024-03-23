// https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>
using namespace std;


bool isValid(string s) {
	int n = s.length();
	stack<int> d;
	int tmp;
	for(int i = 0; i < n; i++) {
		switch(s[i]){
			case '(':
				d.push(1);
				break;
			case ')':
				d.push(-1);
				break;
			case '[':
				d.push(2);
				break;
			case ']':
				d.push(-2);
				break;
			case '{':
				d.push(3);
				break;
			case '}':
				d.push(-3);
				break;
			default:
				return false;
		}
		if(d.size() > 1) {
			if(d.top() < 0) {
				tmp = d.top();
				d.pop();
				if(d.top() > 0 ){
					if(d.top() != tmp*-1 ) return false;
					else d.pop();
				} 
			}
		}
	}
	if(d.empty()) return true;
	return false;
}   

int main() {
	cout << isValid("))");
}
