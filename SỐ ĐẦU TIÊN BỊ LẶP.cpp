#include <bits/stdc++.h>
using namespace std;

void test() {
    int n; cin >> n;
    map<long long,int>a;
    vector<int>v(n);
    for(int i=0 ; i <n ; i++){
        cin >> v[i];
        a[v[i]]++;
    }
    for(auto it : v){
        if( a[it] > 1){
            cout << it << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test();
    }
    return 0;
}
