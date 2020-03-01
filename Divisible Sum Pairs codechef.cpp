#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, vector<int> ar) {

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (((ar[i] + ar[j]) %k==0)) {
                count++;
            }
        }
    }
    return count;

}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    //sort(v.begin(), v.end());
    int a = divisibleSumPairs(n, k, v);
    cout << a << endl;

}