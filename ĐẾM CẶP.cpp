#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n,k; cin >> n >> k;
    int a[n];
    for(int i=0 ; i< n ; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long cnt=0;
    for(int i=0 ; i<n ; i++){
        cnt += lower_bound(a+i+1,a+n, a[i]+k) - (a+i+1);
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        testCase();
    }
    return 0;
}