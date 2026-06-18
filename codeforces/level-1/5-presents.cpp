#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n;
    cin >> n;
    vector <ll> v(n), ans(n);
    
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    
    for(ll i = 0; i < n; i++){
        ans[v[i] - 1] = i + 1;
    }
    
    for(ll i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    
    return 0;
}