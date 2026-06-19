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
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll max = v[0] , min = v[0];
    ll maxIdx = 0, minIdx = 0;
    
    for(ll i = 0; i < n; i++){    
        if(v[i] > max){
            max = v[i];
            maxIdx = i;
        }
        if(v[i] <= min){
            min = v[i];
            minIdx = i;
        }
    }
    
    ll swap = 0;
    if(maxIdx < minIdx){
        swap = maxIdx + (n - 1 - minIdx);
    } else {
        swap = maxIdx + (n - 1 - minIdx - 1);
    }
    cout << swap << endl;
    
    return 0;
}