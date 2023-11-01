// https://leetcode.com/problems/integer-to-roman/
#include <bits/stdc++.h>
using namespace std;

string intSwitch(int num, int mul) {
	num *= pow(10,mul);
	switch(num) {
		case 1:
			return "I";
		case 2:
			return "II";
		case 3:
			return "III";
		case 4:
			return "IV";
		case 5:
			return "V";
		case 6:
			return "VI";
		case 7:
			return "VII";
		case 8:
			return "VIII";
		case 9:
			return "IX";
		case 10:
			return "X";
		case 20:
			return "XX";
		case 30:
			return "XXX";
		case 40:
			return "XL";
		case 50:
			return "L";
		case 60:
			return "LX";
		case 70:
			return "LXX";
		case 80:
			return "LXXX";
		case 90:
			return "XC";
		case 100:
			return "C";
		case 200:
			return "CC";
		case 300:
			return "CCC";
		case 400:
			return "CD";
		case 500:
			return "D";
		case 600:
			return "DC";
		case 700:
			return "DCC";
		case 800:
			return "DCCC";
		case 900:
			return "CM";
		case 1000:
			return "M";
		case 2000:
			return "MM";
		case 3000:
			return "MMM";
	}
	return "";
}

string intToRoman(int num) {
	int dC = 0;
	int ch = 0;
	string ans = "";
	while(num != 0) {
		ch = num%10;
		ans.insert(0, intSwitch(ch, dC));
		num /= 10;
		dC++;
	}
	return ans;
}

int main(){
	std::cout << intToRoman(92) << endl;
}
