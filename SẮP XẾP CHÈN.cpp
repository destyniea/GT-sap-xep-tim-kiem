#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    cout << "Buoc 0: " << a[0] << endl;
    int x;
    for(int i=1; i<n ; i++){
        cout << "Buoc " << i << ": ";
        x = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > x){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = x;
        for(int k = 0; k <= i ; k++){
            cout << a[k] << " ";
        }
        cout << endl;
    }
}