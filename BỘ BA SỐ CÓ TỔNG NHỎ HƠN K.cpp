#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,k; cin >> n >> k;
    ll a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    ll cnt =0;
    for(int i=0 ; i < n -2 ; i++){
        ll l = i+1, r = n-1;
        while(l < r){
            ll x = a[i]+a[l]+a[r];
            if( x < k){
                cnt += r - l;
                l++;
            }
            else r--;
        }
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}