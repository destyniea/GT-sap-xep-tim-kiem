#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int,int>a, pair<int,int>b){
    if( a.second == b.second ) return a.first < b.first;
    else return a.second > b.second;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for(int i=0 ; i<n-1 ; i++){
        int mini = i;
        for(int j=i+1 ; j<n ; j++){
            if( a[mini] > a[j]) mini = j;
        }
        swap(a[i],a[mini]);
        cout << "Buoc " << i+1 << ": ";
        for(int i=0 ; i<n ; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}