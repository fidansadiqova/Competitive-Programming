Problem : https://codeforces.com/contest/1538/problem/C

/**
   - author : Nora
   - created : 25.3.25 6:12:30 pm.
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define bye return 0
#define pb push_back
#define pfr pop_front
#define pbc pop_back
#define pll pair<ll, ll>
#define ff first
#define ss second
#define NO cout<<"NO"
#define YES cout<<"YES"
#define all(v) v.begin(), v.end()

const ll N = 200007;
const ll mod = 1000000007;
const ll MAX=1e18;


void solve(){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> v(n);
    for (ll i=0; i<n; i++) cin>>v[i];
    sort(all(v));
    ll res=0;
    for (ll i=0; i<n; i++){
        ll mn=lower_bound(all(v), l-v[i])-v.begin();
        ll mx=upper_bound(all(v), r-v[i])-v.begin()-1;
        ll dif=mx-mn+1;
        if (mn <= i && i <= mx) dif--;
        res+=dif;
    }
    cout<<res/2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll testcases=1;
    cin>>testcases;
    while (testcases--) {
        solve();
        cout<<endl;
    }
}
