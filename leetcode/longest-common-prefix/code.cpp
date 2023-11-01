// https://leetcode.com/problems/longest-common-prefix/

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	int min = strs[0].size();
	int n = strs.size();
	string ans = "";
	bool isPrefix = false;
	//find the shortest word
    for(int i = 1; i < n; i++) {
		if(strs[i].size() < min)
			min = strs[i].size();
	}

	char temp = strs[0][0];
	for(int i = 0; i < min; i++) {
		for(int j = 0; j < n; j++) {
			if(strs[j][i] == temp) {
				isPrefix = true;
			}
			else {
				isPrefix = false;
				return ans;
			}
		}
		if(isPrefix)
			ans.push_back(temp);
		temp = strs[0][i+1];
	}
	return ans;
}

int main() {
	vector<string> te;
	te.push_back("flower");
	te.push_back("flow");
	te.push_back("flight");
	std::cout << longestCommonPrefix(te);
}
