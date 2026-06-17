#include <cctype>
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    string word;
    cin >> word;

    for(ll i = 0; i < word.length(); i++){
        char letter = tolower(word[i]);
        if( letter != 'a' & letter != 'o' & letter != 'y' & letter != 'e' & letter != 'u' & letter != 'i'){
            cout << "." << letter; 
        }
    }

    return 0;
}