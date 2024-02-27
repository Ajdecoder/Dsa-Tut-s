#include <iostream>
#include <vector>
#include <climits>

using namespace std;

long long kJumps(int n, int k, vector<int> &a) {
    long long maxSum = LLONG_MIN;
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + k; j < a.size(); j++) {
            long long curSum = a[i] + a[j];
            maxSum = max(maxSum, curSum);
        }
    }

    return maxSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << kJumps(n, k, a) << endl;
    }

    return 0;
}
