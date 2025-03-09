#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n],b[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int r=n-1,l=0;
        while(a[r] == b[r]) r--;
        while(a[l] == b[l]) l++;
        cout << l+1 << " " << r+1 << endl;
    }
}