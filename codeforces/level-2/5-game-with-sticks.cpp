#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n, m;
    cin >> n >> m;    

    if(min(n,m) % 2 == 0){
        cout << "Malvika" << endl;
    } else {
        cout << "Akshat" << endl;
    }
    
    return 0;
}