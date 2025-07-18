//******************************************************
//*                3MK The GOAT                        *                            
//******************************************************
#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define cl(x,y)  (x + y - 1) / y
#define lp(size) for (ll i = 0; i < size; i++)
#define rlp(size) for (ll i = size - 1; i >= 0; i--)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
const int N = 1e5 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        vector<Operation> ops;

        // Step 1: Make sure a[i] < b[i] for all i using type-3 swaps
        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) {
                swap(a[i], b[i]);
                ops.push_back({3, i + 1});
            }
        }

        // Step 2: Sort a with adjacent swaps (type-1)
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    ops.push_back({1, j + 1});
                }
            }
        }

        // Step 3: Sort b with adjacent swaps (type-2)
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                if (b[j] > b[j + 1]) {
                    swap(b[j], b[j + 1]);
                    ops.push_back({2, j + 1});
                }
            }
        }

        // Output result
        cout << ops.size() << '\n';
        for (auto &op : ops) {
            cout << op.type << " " << op.index << '\n';
        }
    }
}
int main() {
    FIO;
    solve();

    return 0;
}
