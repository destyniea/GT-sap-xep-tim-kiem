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
        int n; cin >> n;
        int a[n];
        map<int,int>mp;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto it : mp){
            v.push_back(it);
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x : v){
            for(int i =0 ; i< x.second ; i++){
                cout << x.first << " ";
            }
        }
        cout << endl;
    }
} 