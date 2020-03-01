#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, i;
		cin >> n >> i;
		if (n & (1 << i)) {
			cout << "Set" << endl;
		}
		else {
			cout << "Not set" << endl;
		}
	}
}