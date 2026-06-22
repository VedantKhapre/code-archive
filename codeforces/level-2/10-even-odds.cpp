#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n, k; cin >> n >> k;
    if(n % 2 == 0){
        if(k <= n/2){
            cout << k * 2 - 1;
        } else{
            cout << (k - n/2) * 2;
        }
    } else{
        if(k <= n/2 + 1){
            cout << k * 2 - 1;
        } else{
            cout << (k - n/2) * 2 - 2;
        }
    }
    
    return 0;
}