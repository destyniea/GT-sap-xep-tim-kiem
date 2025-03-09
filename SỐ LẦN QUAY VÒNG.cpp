#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<long long>a(n);
    for(int i=0; i < n ; i++){
        cin >> a[i];
    }
    int ans=0;
    for(int i= 1; i<n ; i++){
        if( a[i] < a[i-1]){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
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