#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int freq[101] = { 0 };
	for(int i=0;i<n;i++){
		int c;
		cin >> c;
		freq[c]++;
	}
	int result = 0;
	for (int i = 0; i <= 100;i++) {
		result += freq[i] / 2;
	}
	cout << result;
}