//https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int charToInt(char a) {
	const int n = 50;
	int v = (int)a - n;
	if(v < 0 && v > 7) return -1;
	return v;
}

vector<string> letterCombinations(string digits) {
	vector<string> vp;
	const short int n = digits.size();
	const string dg[] = {"abc", "def", "ghi", "jki", "mno", "pqrs", "tuv", "wxyz"};
	for(int i = 0; i < n; i++) {
		if(charToInt(digits[i]) == -1) break;
	}
	return ans;
}

int main() {
	vector<string> ans = letterCombinations("12");
	for(long unsigned int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
}
