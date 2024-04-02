// https://leetcode.com/problems/kth-distinct-string-in-an-array

#include <bits/stdc++.h>
using namespace std;

string kthDistinct(vector<string>& arr, int k) {
	int n = arr.size();
	map<string, int> in;
	for(int i = 0; i < n; i++){
		in[arr[i]]++;
	}
	int c = 0;
	for(int i = 0; i < n; i++){
		if(in[arr[i]] == 1) c++;
		if(c == k) return arr[i];
	}
	return "";
}

int main() {
	vector<string> arr = {"jqrd","k","miy","svuwg","uv","yttn","bxu","nymzu","dpane","x","mb","zm","ae","ihwtn","kouej","y","zt","h","udx","h","imi","zombs","l","hvt","uor","kzi","tzm","kde","ml","hmvz","hriuy","lav","hlvw","fnnj","bdkh","hu","tuuob","uc","no","qo","ku","foe"};
	cout << kthDistinct(arr, 27);
    ios_base::sync_with_stdio(0); cin.tie(0);
	// your code start here

	return 0;
}
