#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }

    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];

       
    }
    

    vector<long long> sorted_costs = v;
    sort(sorted_costs.begin(), sorted_costs.end());
    for (int i = 1; i <= n; ++i) {
        sorted_costs[i] += sorted_costs[i - 1];

    }

    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
           
            cout << prefix_sum[r] - prefix_sum[l - 1] << endl;

        } else {
           
            cout << sorted_costs[r] - sorted_costs[l - 1] << endl;
        }
    }

    return 0;
}
