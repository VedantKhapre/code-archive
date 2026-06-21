#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n; cin >> n;
    
    ll sx = 0, sy = 0, sz = 0;
    for(ll i = 0; i < n; i++){
        ll x, y, z;
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }

    if(sx == 0 && sy == 0 && sz == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}