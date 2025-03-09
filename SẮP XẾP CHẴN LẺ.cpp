#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int>v1,v2;
    for(int i=0; i < n ; i++){
        int x; cin >> x;
        if( i%2 == 0){
            v1.push_back(x);
        }
        else v2.push_back(x);
    }
    sort(v2.begin(),v2.end(),greater<int>());
    sort(v1.begin(),v1.end());
    int cnt1=0,cnt2=0;
    for(int i=0 ; i< n; i ++){
        if( i%2 ==0){
            cout << v1[cnt1] << " ";
            cnt1++;
        }
        else {
            cout << v2[cnt2] << " ";
            cnt2++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    testCase();
    return 0;
}