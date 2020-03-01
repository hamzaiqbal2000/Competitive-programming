//Program of Sum of Digits in a Number codechef
#include <iostream>
#include <sstream>
using namespace std;
/*
int main() {
	int T;
	cin >> T;
	while(T){
		int n;
		cin >> n;
		ostringstream str1;
		str1 << n;
		string s = str1.str();
		int len = s.length();
		long long int sum = 0;
		//sum = s[0] + s[len - 1];
		for (int i = 0; i < len; i++) {
			char x = s[i];
			int p = (int)x;
			p = p - 48;
			sum = sum + p;
		}
		cout << sum;
	}
}*/

int main() {
	int T;
	cin >> T;
	while (T) {
		int n;
		cin >> n;
		ostringstream str1;
		str1 << n;
		string s = str1.str();
		int len = s.length();
		long long int sum = 0;
		char x1 = s[0];
		int p1 = (int)x1;
		p1 = p1 - 48;
		char x2 = s[len-1];
		int p2 = (int)x2;
		p2 = p2 - 48;

		sum = p1+p2;
		cout << sum;
	}
}