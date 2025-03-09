#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    vector<vector<int>>v;
    for(int i = 0 ; i< n ; i++){
        int x = a[i];
        int j = i-1;
        while( j >= 0 && a[j] > x ){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
        vector<int>kq(a.begin(),a.begin()+i+1);
        v.push_back(kq);
    }
    for(int i = v.size()-1 ; i >= 0 ; i--){
        cout << "Buoc " << i << ": ";
        for(auto x : v[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}