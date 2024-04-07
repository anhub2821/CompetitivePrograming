// https://leetcode.com/problems/roman-to-integer/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int charSwitch(char s) {
    switch(s){
        case 'I':
            return 1;
        case 'V':
			return 5;
        case 'X':
			return 10;
        case 'L':
			return 50;
        case 'C':
			return 100;
        case 'D':
			return 500;
        case 'M':
			return 1000;
		default:
			return 0;
	}
}
int romanToInt(string s) {
    int total = 0;
	int aChar = 0;
	int n = s.size();
	if(n == 1) {
		total = charSwitch(s[0]);
		return total;
	}
    for(int i = 0; i < n; i++) {
		aChar = charSwitch(s[i]);
		if(i < n-1 && aChar < charSwitch(s[i+1])) {
			aChar = charSwitch(s[i+1]) - aChar;
			i++;
		}
		total += aChar;
    }
    return total;
}

int main() {
	std::cout << romanToInt("MCMXCIV");
}
