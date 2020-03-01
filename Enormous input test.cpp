#include <iostream>
using namespace std;

int main() {
	int n, k, total=0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		long long int t;
		cin >> t;
		if (t % k == 0) {
			total = total++;
		}
	}
	cout << total;
}