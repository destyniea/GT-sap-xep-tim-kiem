#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n);
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        int cnt=0;
        for(int i=0 ; i<n-1 ; i++){
            int mini = i;
            for(int j = i + 1 ; j <n ; j++){
                if( a[j] < a[mini] ){
                    mini = j;
                }
            }
            if( mini != i) {
                swap(a[mini],a[i]);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}