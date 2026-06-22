#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll balance; cin >> balance;

    if(balance > 0){
        cout << balance;
        return 0;
    }
    
    ll removeLast = balance / 10;

    ll removeLastTwo = balance / 100;
    ll lastDigit = balance % 10;
    ll noPrev = removeLastTwo * 10 + lastDigit;
    
    if(removeLast > noPrev){
        cout << removeLast;
    } else{
        cout << noPrev;
    }

    return 0;
}