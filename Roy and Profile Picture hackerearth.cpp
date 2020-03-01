#include <iostream>
using namespace std;

int main() {
	int l, n;
	cin >> l;
	cin >> n;
	while (n--) {
		int w, h;
		cin >> w >> h;
		if (w == h && w >= l) {
			cout << "ACCEPTED" << endl;
		}
		else if (w!=h && w>=l && h>=l) {
			cout << "CROP IT" << endl;
		}
		else if (w<l || h<l) {
			cout << "UPLOAD ANOTHER" << endl;
		}
	}
}