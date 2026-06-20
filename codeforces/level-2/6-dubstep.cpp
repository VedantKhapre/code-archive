#include <string>
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    string str;
    cin >> str;
    ll n = str.length();
    
    string ans;
    bool flag = false;
    
    for(ll i = 0; i < n; i++){
        if(i + 2 < n && str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B'){
            i += 2;
            if(flag){
                ans += " ";
                flag = false;
            }
            
        } else {
            ans += str[i];
            flag = true;
        }
    }
    cout << ans;
    return 0;
}