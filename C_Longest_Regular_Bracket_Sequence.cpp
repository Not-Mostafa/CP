#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define lp(size) for (int i = 0; i < size; i++)
#define ai(thing) for(auto& i : thing) cin>>i;
#define au(thing) for(auto& i : thing)
#define lpeq(size) for (int i = 0; i <= size; i++)

using namespace std;

void solve()
{
    string s; cin >> s;
    int n = s.length();
    vector<int> d(n, 0); // Store the length of the valid substring ending at each position
    stack<int> stk;
    int maxLength = 0, count = 0;
    unordered_map<int, int> lengthCount;
    lp(n) 
    {
        if (s[i] == '(') 
            stk.push(i);
        else 
        {
            if (!stk.empty()) 
            {
                int start = stk.top();
                stk.pop();
                d[i] = (i - start + 1) + (start > 0 ? d[start - 1] : 0);
                maxLength = max(maxLength, d[i]);
                lengthCount[d[i]]++;
            }
        }
    }
    if (maxLength == 0) {
        cout << "0 1" << endl;
    } else {
        cout << maxLength << " " << lengthCount[maxLength] << endl;
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
