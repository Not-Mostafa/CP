#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define ll long long
#define ld long double
#define all(container) (container).begin(), (container).end()
#define cl(x,y)  (x + y - 1) / y
#define lp(size) for (int i = 0; i < size; i++)
#define rlp(size) for (int i = size - 1; i >= 0; i--)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
typedef vector<int> vi;
typedef vector<ll> vll;
const int N = 1e5 + 5;
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

void solve()
{
    int n;
    unsigned int x;
    cin >> n >> x;
    
    vector<unsigned int> a;
    unordered_set<unsigned int> present;
    
    for (unsigned int i = 0; a.size() < n - 1; i++) {
        if (present.count(i)) continue;
        a.push_back(i);
        present.insert(i);
    }
    
    unsigned int last = x;
    for (unsigned int num : a) {
        last ^= num;
    }
    
    if (present.count(last) || last >= (1 << 30)) {
        a.pop_back();
        unsigned int adjust = a.back();
        a.pop_back();
        a.push_back(adjust ^ last);
        a.push_back(x);
    } else {
        a.push_back(last);
    }
    
    for (unsigned int num : a) {
        cout << num << " ";
    }
    cout << "\n";
}
int main() {
    FIO;
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
