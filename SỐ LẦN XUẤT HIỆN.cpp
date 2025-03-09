#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        int cnt=0;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            if( a[i] == k){
                cnt++;
            }
        }
        if( !cnt ) cout << "-1";
        else cout << cnt;
        cout << endl;
    }
}