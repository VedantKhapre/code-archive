#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    string s;
    vector <ll> v(3,0);
    cin >> s;
    
    for(ll i = 0; i < s.length(); i++){
        if(s[i] == '1') v[0]++; 
        if(s[i] == '2') v[1]++; 
        if(s[i] == '3') v[2]++; 
    }

    ll total = v[0] + v[1] + v[2];
    ll count = 0;
    
    for(ll i = 0; i <= 2; i++){
        for(ll j = 0; j < v[i]; j++){
            cout << i+1;
            count++;
            if(count < total){
                cout << "+";
            }
        }
    }
    
    return 0;
}