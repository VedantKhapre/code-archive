#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;
    
    string word;
    cin >> word;
    string hello = "hello";
    ll index = 0;
    
    for(ll i = 0; i < word.length(); i++){
        if(word[i] == hello[index]){
            index++;
        }
        if(index == 5) break;
    }
    if(index == 5){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}