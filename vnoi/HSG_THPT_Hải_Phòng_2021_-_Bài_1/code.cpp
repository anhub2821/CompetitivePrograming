#include <bits/stdc++.h>
using namespace std;

bool islatin(char a) {
	if(a >= 'a' && a <= 'z') return true;
	if(a >= 'A' && a <= 'Z') return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::string s = "";
	getline(std::cin, s);
	for(int i = s.size(); i >= 0 ; i--){
		if(!islatin(s[i])) {
			s.erase(i, 1);
		}
	}
	std::cout << s;
  return 0;
}
