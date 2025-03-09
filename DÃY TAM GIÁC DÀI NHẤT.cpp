#include <bits/stdc++.h>
using namespace std;

void testcase() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int &x : a) {
        cin >> x;
    }
    vector<int>dq1(n,1),dq2(n,1);

    for (int i = 1; i < n; i++) {
        if(a[i] > a[i-1] ){
            dq1[i] = dq1[i-1]+1;
        }
    }
    for (int i = n-2; i >= 0; --i) {
        if(a[i] > a[i+1] ){
            dq2[i] = dq2[i+1]+1;
        }
    }
    int max_l = 0;
    for(int i = 0; i < n ; i++){
        max_l = max(max_l, dq1[i]+ dq2[i]-1);
    }
    cout << max_l << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        testcase();
    }

    return 0;
}
