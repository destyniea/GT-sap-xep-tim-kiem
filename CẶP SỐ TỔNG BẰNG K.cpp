#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        map<int,int>mp;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        int cnt=0;
        for(int i=0 ; i<n ; i++){
            if( mp.count(k - a[i])){
                cnt += mp[k-a[i]];
            }
            mp[a[i]]++;
        }
        cout << cnt << endl;
    }
}