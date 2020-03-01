#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i *= 10)
		sum += (n - i + 1);
	cout << sum << endl;
}