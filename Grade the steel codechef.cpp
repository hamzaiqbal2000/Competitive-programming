#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int h, t, grade;
		double c;
		cin >> h >> c >> t;
		if (h > 50 && c < 0.7 && t>5600) {
			grade = 10;
		}
		else if (h > 50 && c < 0.7) {
			grade = 9;
		}
		else if (t > 5600 && c < 0.7) {
			grade = 8;
		}
		else if (h > 50 && t > 5600) {
			grade = 7;
		}
		else if (h > 50 || c < 0.7 || t>5600) {
			grade = 6;
		}
		else {
			grade = 5;
		}
		cout << grade << endl;
	}
}