#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n, d; cin >> n >> d;

    ll songTime = 0;
    ll restTime = (n-1) * 10;
    
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        songTime += x;
    }

    if(songTime + restTime > d){
        cout << -1 << endl;
        return 0;
    }

    ll extraTime = d - (songTime + restTime);
    ll extraJoke = extraTime / 5;
    ll totalJokes = (n - 1) * 2 + extraJoke;

    cout << totalJokes  << endl;
    
    return 0;
}