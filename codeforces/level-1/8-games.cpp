#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n;
    cin >> n;
    vector <ll> a(n);
    vector <ll> b(n);

    for(ll i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    ll moves = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(a[i] == b[j]){
                moves++;
            }
        }
    }

    cout << moves;
    
    return 0;
}