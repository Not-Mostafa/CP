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
    int n;cin>>n;
    int cycle1[n/2],arr[n][n],cycle2[n/2];
    cycle1[0] = n/2;cycle2[n/2-1] = n/2+1;
    vector<ll> v;
    lp(n)
        if(i+1!=n/2+1 && i+1!=n/2) v.push_back(i+1);
    lp(n/2-1)
    {
        cycle1[i+1] = v.back();
        v.pop_back();
    }
    lp(n/2-1)
    {
        cycle2[i] = v.back();
        v.pop_back();
    }
    lp(n/2)
    {
        int cyclestart1 = 0;
        int cyclestart2 = i;
        for(int j = i; j < n/2 ; j++)
        {   
            arr[i][j] = cycle1[cyclestart1];
            cyclestart1++;
            if(cyclestart1 == n/2)
            cyclestart1 = 0;
        }
        for(int j = 0; j < i ; j++)
        {   
            arr[i][j] = cycle1[cyclestart1];
            cyclestart1++;
            if(cyclestart1 == n/2)
            cyclestart1 = 0;
        }
        for(int j = n/2 ; j < n ; j++)
        {
            arr[i][j] = cycle2[cyclestart2];
            cyclestart2++;
            if(cyclestart2 == n/2)
            cyclestart2 = 0;
        }
    }
    lp(n/2)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rlp(n/2)
    {
        for(int j = n-1 ; j >= 0 ; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
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
