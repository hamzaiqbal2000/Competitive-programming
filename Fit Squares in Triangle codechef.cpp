#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int b;
		cin >> b;
		double area;
		double No_of_triangles;
		if (b % 2 == 0) {
			area = 0.5 * b * b;
			No_of_triangles = (area - b) / 4;
		}
		else {
			b = b - 1;
			area = 0.5 * b * b;
			No_of_triangles = (area - b) / 4;
		}
		cout << No_of_triangles << endl;
	}
}