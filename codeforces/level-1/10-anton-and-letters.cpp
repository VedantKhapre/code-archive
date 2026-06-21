#include <string>
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    string letters;
    getline(cin, letters);

    set <char> unique; 
    for(ll i = 1; i < letters.length() - 1; i++){
        if(letters[i] != ',' && letters[i] != ' '){
            unique.insert(letters[i]);
        }
    }
    cout << unique.size() << endl;
    
    return 0;
}