#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    map<long long,int>mp;
    for(int i=0 ; i<n ; i++){
        long long x; cin >> x;
        mp[x]++;
    }
    for(auto it : mp){
        if( it.second > n/2){
            cout << it.first << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
    }
    return 0;
}