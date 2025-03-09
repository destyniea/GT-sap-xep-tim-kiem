#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        set<int>s;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        for(int i=0 ; i <n ; i++){
            while(a[i]){
                s.insert(a[i]%10);
                a[i] /= 10;
            }
        }
        for(int x : s){
            cout << x << " ";
        }
        cout << endl;
    }
}