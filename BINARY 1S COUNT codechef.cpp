#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int count = 0;
		while (n == 0) {
			n = n & (n - 1);
			count++;
		}
		cout << count << endl;
	}
}