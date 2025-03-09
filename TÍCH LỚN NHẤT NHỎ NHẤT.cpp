#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n],b[m];
        int maxi = -1e9, mini = 1e9;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            if( a[i] > maxi) maxi = a[i];
        }
        for(int i=0 ; i<m ; i++){
            cin >> b[i];
            if( b[i] < mini) mini = b[i];
        }
        cout << (long long)maxi*mini << endl;
    }
} 