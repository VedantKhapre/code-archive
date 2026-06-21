#include <algorithm>
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n, m; cin >> n >> m;
    vector <ll> v(m);
    for(ll i = 0; i < m; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll minimum = v[m-1] - v[0];
    
    for(ll i = 0; i + n - 1 < m; i++){
        ll current_min = v[i+n-1] - v[i];

        if(current_min < minimum){
            minimum = current_min;
        }
    }
    cout << minimum;

    return 0;
}