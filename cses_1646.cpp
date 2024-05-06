#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> prefix_sum(n + 1, 0);

    // Read the array values and calculate prefix sum
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        prefix_sum[i] = prefix_sum[i - 1] + x;
    }

    // Process queries
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << prefix_sum[b] - prefix_sum[a - 1] << endl;
    }

    return 0;
}
