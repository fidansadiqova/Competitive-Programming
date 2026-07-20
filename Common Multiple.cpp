Problem : https://codeforces.com/contest/2103/problem/A

/**
   - author : Nora
   - created : 22.4.25 8:42:28 pm.
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
#define No cout<<"No"
#define Yes cout<<"Yes"
#define all(v) v.begin(), v.end()

const ll N = 200007;
const ll mod = 1000000007;
const ll MAX=1e18;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for (ll i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    cout<<mp.size();
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
