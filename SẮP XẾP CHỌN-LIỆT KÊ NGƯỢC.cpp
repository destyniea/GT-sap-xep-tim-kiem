#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    vector<vector<int>> v;
    for(int i=0 ; i<n-1 ; i++){
        int minx = a[i];
        int mini = i;
        for(int j = i+1 ; j < n ; j++){
            if( a[j] < minx){
                minx = a[j];
                mini = j;
            }
        }
        swap(a[i],a[mini]);
        v.push_back(a);
    }
    for(int i = v.size()-1 ; i >= 0 ; i--){
        cout << "Buoc " << i+1 << ": ";
        for(auto x : v[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}