#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double A;
	double B;
	double D;
	char C;
	cin >> A;
	cin >> B;
	cin >> C;
	if (C == '+') {
		D = A + B;
	}
	else if (C == '-') {
		D = A - B;

	}
	else if (C == '*') {
		D = A * B;
	}
	else if (C == '/') {
		D = A / B;
	}
	cout << fixed << setprecision(6) << D << endl;
}