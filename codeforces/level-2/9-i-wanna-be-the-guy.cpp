#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n; cin >> n;
    ll p, q;
    set <ll> levels;
    
    cin >> p;
    for(ll i = 0; i < p; i++){
        ll x;
        cin >> x;
        levels.insert(x);
    }

    cin >> q;
    for(ll i = 0; i < q; i++){
        ll x;
        cin >> x;
        levels.insert(x);
    }

    if(levels.size() < n){
        cout << "Oh, my keyboard!" << endl;
    } else{
        cout  << "I become the guy." << endl;
    }
    
    return 0;
}