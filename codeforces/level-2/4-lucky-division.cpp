#include <string>
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n;
    cin >> n;
    
    for(ll i = 1; i <= 1000; i++){
        string range = to_string(i);
        bool isLucky = 1;
        for(ll j = 0; j < range.length(); j++){
            if(range[j] != '4' && range[j] != '7'){
                isLucky = 0;
                break;
            }
        }
        if(!isLucky) continue;
        if(n % i == 0){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    
    return 0;
}