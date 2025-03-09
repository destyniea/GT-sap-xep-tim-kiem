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
        vector<vector<int>>v;
        for(int i=0; i < n-1 ; ++i){
            for(int j = i+1; j < n ; j++){
                if( a[i] > a[j] ){
                    swap(a[i],a[j]);
                }
            }
            v.push_back(a);
        }
        for(int p = v.size()-1; p >= 0 ; p-- ){
            cout << "Buoc " << p+1 << ": ";
            for(auto x : v[p]){
                cout << x << " ";
            }
            cout << endl; 
        }
        cout << endl;
    }
}