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
        map<int,int>mp;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            mp[a[i]] = i;
        }
        cout << mp[x] + 1<< endl;
        cout << endl;
    }
} 