#include <bits/stdc++.h>
using namespace std;

void testcase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    for (int &x : a) {
        cin >> x;
    }
    
    unordered_map<int, int> freq;
    long long cnt = 0;

    for (int i = 0; i < n; i++) {
        int complement = k - a[i];
        if (freq.find(complement) != freq.end()) {
            cnt += freq[complement]; 
        }
        freq[a[i]]++;
    }
    
    cout << cnt << endl;
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
