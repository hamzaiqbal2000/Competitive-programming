#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n; string s;
		cin >> n;
		if (n%8 == 0) {
			n = n - 1;
			s = "SL";
		}
		else if (n%8 == 1) {
			n = n + 3;
			s = "LB";
		}
		else if(n % 8 ==2){
			n = n + 3;
			s = "MB";
		}
		else if(n % 8 ==3){
			n = n + 3;
			s = "UB";
		}
		else if (n % 8 ==4) {
			n = n - 3;		//3UB | 6UB  
			s = "LB";		//2MB | 5MB
							//1LB | 4LB
							//7SL | 8SU
		}
		else if (n % 8 ==5) {
			n = n - 3;
			s = "MB";
		}
		else if (n % 8 ==6) {
			n = n - 3;
			s = "UB";
		}
		else if (n % 8 ==7) {
			n = n + 1;
			s = "SU";
		}
		
		cout << s << endl;
	}
}