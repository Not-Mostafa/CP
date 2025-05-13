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
const int M = 1e9 + 7;
const ll OO = 0x3f3f3f3f3f3f3f3f;

bool check(const string &s, int K) {
    int cnt = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i-1]) {
            cnt++;
            if (cnt >= K) return false;
        } else {
            cnt = 1;
        }
    }
    return true;
}

void solve() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    
    if (check(S, K)) {
        cout << "YES\n";
        return;
    }
    
    int first = -1, last = -1;
    int cnt = 1;
    for (int i = 1; i < N; ++i) {
        if (S[i] == S[i-1]) {
            cnt++;
            if (cnt >= K && first == -1) {
                first = i;
            }
        } else {
            cnt = 1;
        }
    }
    cnt = 1;
    for (int i = N - 2; i >= 0; --i) {
        if (S[i] == S[i+1]) {
            cnt++;
            if (cnt >= K && last == -1) {
                last = i;
            }
        } else {
            cnt = 1;
        }
    }
    
    
    string temp = S;
    reverse(temp.begin() + first, temp.begin() + last + 1); // last != first
    if (check(temp, K)) {
        cout << "YES\n";
        return;
    }

    // last = first
    // start to end
    temp = S;
    reverse(temp.begin() + first, temp.end()); 
    if (check(temp, K)) {
        cout << "YES\n";
        return;
    }

    temp = S;
    reverse(temp.begin(), temp.begin() + first + 1); 
    if (check(temp, K)) {
        cout << "YES\n";
        return;
    }

    temp = S;
    ll good_end = N-1;
    while(good_end > first && S[good_end] == S[first]) good_end--;
    reverse(temp.begin() + first, temp.begin() + good_end + 1); 
    if (check(temp, K)) {
        cout << "YES\n";
        return;
    }

    if(first + 1 < n)
    {
        temp = S;
        ll good_start = 0;
        while(good_start < first && S[first+1] == S[good_start]) good_start++;
        reverse(temp.begin() + good_start, temp.begin() + first + 1); 
        if (check(temp, K)) {
            cout << "YES\n";
            return;
        }
    }


    reverse(all(S));
    if (check(S, K)) {
        cout << "YES\n";
        return;
    }
    
    first = -1, last = -1;
    cnt = 1;
    for (int i = 1; i < N; ++i) {
        if (S[i] == S[i-1]) {
            cnt++;
            if (cnt >= K && first == -1) {
                first = i;
            }
        } else {
            cnt = 1;
        }
    }
    cnt = 1;
    for (int i = N - 2; i >= 0; --i) {
        if (S[i] == S[i+1]) {
            cnt++;
            if (cnt >= K && last == -1) {
                last = i;
            }
        } else {
            cnt = 1;
        }
    }
    
    
    temp = S;
    reverse(temp.begin() + first, temp.begin() + last + 1); // last != first
    if (check(temp, K)) {
        cout << "YES\n";
        return;
    }

    // last = first
    // start to end
    temp = S;
    reverse(temp.begin() + first, temp.end()); 
    if (check(temp, K)) {
        cout << "YES\n";
        return;
    }

    temp = S;
    reverse(temp.begin(), temp.begin() + first + 1); 
    if (check(temp, K)) {
        cout << "YES\n";
        return;
    }

    temp = S;
    good_end = N-1;
    while(good_end > first && S[good_end] == S[first]) good_end--;
    reverse(temp.begin() + first, temp.begin() + good_end + 1); 
    if (check(temp, K)) {
        cout << "YES\n";
        return;
    }

    if(first + 1 < n)
    {
        temp = S;
        ll good_start = 0;
        while(good_start < first && S[first+1] == S[good_start]) good_start++;
        reverse(temp.begin() + good_start, temp.begin() + first + 1); 
        if (check(temp, K)) {
            cout << "YES\n";
            return;
        }
    }

    
    

    
    cout << "NO\n";
}

int main() {
    FIO;
    ll t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}