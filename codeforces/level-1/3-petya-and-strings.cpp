#include <cctype>
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    string str1, str2;
    cin >> str1 >> str2;

    for(ll i = 0; i < str1.length(); i++){
        char cstr1 = tolower(str1[i]);
        char cstr2 = tolower(str2[i]);

        if(cstr1 < cstr2){
            cout << "-1";
            return 0;
        } else if (cstr1 > cstr2) {
            cout << "1";
            return 0;
        }
    }
    cout << "0";    

    return 0;
}