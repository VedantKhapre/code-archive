#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll matrix[5][5];
    ll x = -1, y = -1;
    
    for(ll i = 0; i < 5; i++){
        for(ll j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    cout << abs(2 - x) + abs(2 - y);
    
    return 0;
}