#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int,int>a, pair<int,int>b){
    if( a.second == b.second ) return a.first < b.first;
    else return a.second > b.second;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        int a[n];
        set<int>s;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        int oke = 1;
        for(int it : s){
            if( s.find(x) == s.end()){
                oke = -1;
            }
        }
        cout << oke;
        cout << endl;
    }
} 