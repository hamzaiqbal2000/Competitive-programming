#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> x;
	vector<int> y;
	vector<int> z;
	int sumx = 0, sumy = 0, sumz = 0;
	for(int i=0;i<n;i++){
		int c;
		cin >> c;
		x.push_back(c);
		cin >> c;
		y.push_back(c);
		cin >> c;
		z.push_back(c);
		sumx = sumx + x[i];
		sumy = sumy + y[i];
		sumz = sumz + z[i];
	}
	if (sumx == 0 && sumy == 0 && sumz == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

}