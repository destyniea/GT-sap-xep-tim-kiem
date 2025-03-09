#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];
    for(int i=0; i < n ; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int mine = INT_MAX;
    for(int i=0 ; i<n-1 ; i++){
        mine = min(mine, a[i+1]-a[i]);
    }
    cout << mine << endl;

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