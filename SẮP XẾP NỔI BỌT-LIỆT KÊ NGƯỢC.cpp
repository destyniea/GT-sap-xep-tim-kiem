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
        for(int i=0 ; i < n ; i++){
            bool check = false;
            for(int j = 0 ; j < n - i -1 ; j++){
                if(a[j] > a[j+1]){
                    check = true;
                    swap(a[j],a[j+1]);
                }
            }
            if(!check) break;
            v.push_back(a);
        }
        for(int i = v.size()-1 ; i >= 0; i--){
            cout << "Buoc " << i+1 << ": ";
            for(auto x : v[i]){
                cout << x << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}