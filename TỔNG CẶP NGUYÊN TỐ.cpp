#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int n){
    if(n<2) return 0;
    for(int i=2 ; i<=sqrt(n); i++){
        if( n%i ==0) return 0;
    }
    return 1;
}
void solve(){
    int n; cin >> n;
    for(int i=2 ; i<=n/2 ; i++){
        if ( check(i) && check(n-i)){
            cout << i << " " << n-i;
            return;
        }
    }
    cout << "-1";
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
} 