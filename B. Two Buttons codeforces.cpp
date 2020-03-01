#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int count = 0;
	if (m <= n) {
		count = n - m;
	}
	else if (m > n) {
		while (m > n) {
			if (m % 2 == 0) {
				m = m / 2;
				count++;
			}
			else {
				m = m + 1;
				count++;
			}
		}
		count = count + (n - m);
	}
	cout << count << endl;
}