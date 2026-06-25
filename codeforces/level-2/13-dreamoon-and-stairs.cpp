#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main(){
    FAST_IO;

    ll n, m; cin >> n >> m;

    ll minMove = (n / 2) + (n % 2);
    ll maxMove = n;

    ll nextMultiple = ((minMove + (m - 1)) / m) * m;

    if(nextMultiple <= maxMove){
        cout << nextMultiple << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}