#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, b;
		cin >> n >> b;
		int result = 0;
		for (int i = 0; i < n; i++) {
			int p, w, h;
			cin >> w >> h >> p;
			if (p <= b) {
				if (result < (w * h)) {
					result = w * h;
				}
			}
		}
		if (result == 0) {
			cout << "no tablet" << endl;
		}
		else {
			cout << result << endl;
		}
	}
}