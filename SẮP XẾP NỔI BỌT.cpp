#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for(int i=1; i<n ; ++i){
        int check = false;
        for(int j=0 ; j<n-i ; ++j){
            if( a[j] > a[j+1] ){
                swap(a[j],a[j+1]);
                check = true;
            }
        }
        if(!check) break;
        cout << "Buoc " << i <<  ": ";
        for(int k=0 ; k<n ; ++k){
            cout << a[k] << " ";
        }
        cout << endl;
    }
}