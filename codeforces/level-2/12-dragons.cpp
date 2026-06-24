#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#define strength first
#define bonus second

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll s, n; cin >> s >> n;
    pair<ll, ll> dragon[n];
    
    for(ll i = 0; i < n; i++){
        cin >> dragon[i].strength >> dragon[i].bonus;
    }
    
    sort(dragon, dragon + n);
    
    for(ll i = 0; i < n; i++){
        if(s > dragon[i].strength) {
            s += dragon[i].bonus;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    
    return 0;
}