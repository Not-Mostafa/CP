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
    ll n,m,a;
    cin>>n>>m>>a;
    vector<ll> M(m,0),A(a,0);
    ai(M) ai(A)
    vector<ll> no(n+1,1);
    ll ind = 0,ct = n;
    for (int i = 1; i < n+1; i++)
    {
        if(ind < a && A[ind] == i)
        {
            no[i] = 0;
            ind++;
            ct--;
        }
        
    }
    // for (int i = 1; i < n+1; i++)
    // {
    //     cout<<no[i]<<" ";
    // }
    // cout<<endl<<ct<<endl;
    lp(m)
    {
        if(ct > 1)
        {
            cout<<"0";
        }
        else if(no[M[i]] == 0 && ct == 1)
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
