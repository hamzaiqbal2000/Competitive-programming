#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int x;
		cin >> x;
		if ((x & (x - 1)) == 0 && x!=0) {
			cout << "1" << endl;
		}
		else {
			cout << "0" << endl;
		}
	}
}