#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int s, c = 0;
		while (n != 0) {
			s = pow(n, 0.5);
			n = n - (s * s);
			c++;
		}
		cout << c << endl;


	}

}