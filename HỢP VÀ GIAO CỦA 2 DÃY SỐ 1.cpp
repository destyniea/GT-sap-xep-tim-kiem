#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        set<int>se1,se2,s;
        for(int i=0 ; i<n; i++){
            int x; cin >> x;
            se1.insert(x);
            s.insert(x);
        }
        for(int i=0 ; i<m ; i++){
            int x; cin >> x;
            se2.insert(x);
            s.insert(x);
        }
        for(int x : s){
            cout << x << " ";
        }
        cout << endl;
        for(auto it : se1){
            if( se2.find(it) != se2.end()){
                cout << it << " ";
            }
        }
        cout << endl;
    }
}