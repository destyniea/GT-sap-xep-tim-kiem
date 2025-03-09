#include <bits/stdc++.h>
using namespace std;

bool check(long long a[], int n, long long k) {
    sort(a,a+n);
    for(int i = 0 ; i < n - 2 ; i++){
        int l = i+1, r = n-1 ;
        while( l < r){
            long long sum = a[i] + a[l] + a[r];
            if( sum == k) return true;
            else if( sum < k) l++;
            else r--;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        long long a[n];
        for(int i=0 ; i <n ; i++){
            cin >> a[i];
        }
        if( check(a,n,k) ) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}