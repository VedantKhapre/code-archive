#include <algorithm>
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;
    
    ll n;
    cin >> n;
    vector <ll> v(n);

    ll total = 0;
    for(ll i = 0; i < n; i++){
        cin >> v[i];
        total += v[i];
    }
    sort(v.begin(),v.end(), greater());
    
    ll money = 0;
    ll coins = 0;
    ll limit = total / 2;
    
    for(ll i = 0; i < n; i++){
        money += v[i];
        coins++;
        if(money > limit) break;
    }
    cout << coins;
    return 0;
}