#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        set<int>s;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        sort(a,a+n);
        int cnt=0;
        for(int i=a[0] ; i<= a[n-1]; i++){
            if( s.find(i) == s.end()){
                cnt++;
            }
        }
        cout << cnt << endl; 
    }
} 