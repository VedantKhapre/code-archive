#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n, m; cin >> n >> m;
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(i % 2 == 0){
                cout << "#";
            } else if(i % 4 == 1){
                cout << (j == m - 1 ? "#" : ".");
            } else {
                cout << (j == 0 ? "#" : ".");
            }
        }
        cout << endl;
    }
    
    return 0;
}