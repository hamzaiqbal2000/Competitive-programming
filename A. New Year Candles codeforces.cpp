#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int result = a;
	while (a>=b ) {
		result = result + a/b;
		a = (a / b) + (a % b);
	}
	cout << result << endl;
}