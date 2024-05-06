#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    long long prefix_sum = 0;
    unordered_map<long long, int> prefix_sum_freq;
    long long ans = 0;

    prefix_sum_freq[0] = 1;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        prefix_sum += a;

        if (prefix_sum_freq.find(prefix_sum - x) != prefix_sum_freq.end()) {
            ans += prefix_sum_freq[prefix_sum - x];
        }

        prefix_sum_freq[prefix_sum]++;
    }

    cout << ans << endl;

    return 0;
}
