Problem : https://codeforces.com/contest/1552/problem/A

/**
   - author : Nora
   - created : 14.4.25 6:8:0 pm.
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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string temp=s;
    sort(all(temp));
    ll res=0;
    for (ll i=0; i<n; i++){
        if (s[i] != temp[i]) res++;
    }
    cout<<res;
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
