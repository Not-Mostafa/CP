#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> x(n), r(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> r[i];
        }

        int max_r = *max_element(r.begin(), r.end());
        vector<vector<pair<int, int>>> intervals(max_r + 1);

        for (int i = 0; i < n; ++i) {
            int xi = x[i];
            int ri = r[i];
            for (int y = 0; y <= ri; ++y) {
                ll rem = (ll)ri * ri - (ll)y * y;
                int low = 0, high = ri;
                int s = 0;
                while (low <= high) {
                    int mid = (low + high) / 2;
                    if ((ll)mid * mid <= rem) {
                        s = mid;
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
                int left = xi - s;
                int right = xi + s;
                intervals[y].emplace_back(left, right);
            }
        }

        ll total = 0;
        for (int y = 0; y <= max_r; ++y) {
            auto& vec = intervals[y];
            if (vec.empty()) continue;

            sort(vec.begin(), vec.end());
            vector<pair<int, int>> merged;
            for (auto& p : vec) {
                if (merged.empty()) {
                    merged.push_back(p);
                } else {
                    auto& last = merged.back();
                    if (p.first <= last.second + 1) {
                        last.second = max(last.second, p.second);
                    } else {
                        merged.push_back(p);
                    }
                }
            }

            ll sum_len = 0;
            for (auto& p : merged) {
                sum_len += (p.second - p.first + 1);
            }

            if (y == 0) {
                total += sum_len;
            } else {
                total += 2 * sum_len;
            }
        }

        cout << total << '\n';
    }

    return 0;
}