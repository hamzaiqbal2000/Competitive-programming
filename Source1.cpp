#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <map>//key value pair
#include <unordered_map>
//sort,compare,interval,binary_search,lower_bound
using namespace std;

vector<int> removeDuplicates(vector<int> input) {
	set<int> st;
	vector<int> result;
	for (int i = 0; i < input.size(); i++) {
		if (st.find(input[i]) == st.end()) {
			st.insert(input[i]);
		}
		result.push_back(input[i]);
	}
	return result;
}


int main() {
	//iterator//pointer to an element
	/*vector<int> v;
	for (int i = 0; i <5; i++) {
		v.push_back(i + 1);
	}
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	pair<int, char> p;
	pair<int, char> p2(1, 'a');
	cout << p2.first;*/
	vector<int> input;
	int x;
	for (int i = 0; i < 5; i++) {
		cin >> x;
		input.push_back(x);
	}
	input= removeDuplicates(input);
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << " ";
	}
}