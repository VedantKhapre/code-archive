#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll side = 0;
    
    if(y1 == y2){
        side = abs(x2 - x1);
        cout << x1 << " " << y1 + side << " " << x2 << " " << y2 + side << endl;
    } else if(x1 == x2){
        side = abs(y2 - y1);
        cout << x1 + side << " " << y1 << " " << x2 + side << " " << y2 << endl;
    } else if(abs(x2 - x1) == abs(y2 - y1)){
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl; 
    } else{
        cout << -1 << endl;
    }

    return 0;
}