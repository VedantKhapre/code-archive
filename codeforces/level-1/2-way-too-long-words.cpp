#include <string>
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll t;
    string word;
    cin >> t;

    for(ll i = 0; i < t; i++){
        cin >> word;
        ll l = word.length();

        if(l > 10){
            cout << word[0] << l - 2 << word[l - 1] << endl;
        } else{
            cout << word << endl;
        }
    }
    
    return 0;
}