Problem : https://codeforces.com/contest/2106/problem/C

/**
   - author : Nora
   - created : 25.3.25 1:4:53 pm.
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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n), b(n);
    for (ll i=0; i<n; i++) cin>>a[i];
    for (ll i=0; i<n; i++) cin>>b[i];
    set<ll> sums;
    ll sum=0;
    for (ll i=0; i<n; i++){
        if (b[i] != -1){
            sums.insert(a[i]+b[i]);
            sum=a[i]+b[i];
        }
    }
    if (sums.size() >= 2){
        cout<<0;
        return;
    }
    if (sums.size() == 1){
        for (ll i=0; i<n; i++){
            ll temp=sum-a[i];
            if (temp > k || temp < 0){
                cout<<0;
                return;
            }
        }
        cout<<1;
        return;
    }
    ll mx=*max_element(all(a)), mn=*min_element(all(a));
    ll l=mx, r=mn+k;
    cout<<max(r-l+1, 0LL);
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
