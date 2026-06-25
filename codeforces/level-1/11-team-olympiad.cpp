#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n; cin >> n;
    
    vector <ll> prog, math, pe;

    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        
        if(x == 1) prog.push_back(i);
        else if(x == 2) math.push_back(i);
        else if(x == 3) pe.push_back(i);
    }

    ll maxTeams = min({prog.size(), math.size(), pe.size()});

    cout << maxTeams << endl;

    for(ll i = 0; i < maxTeams; i++){
        cout << prog[i] + 1 << " " << math[i] + 1 << " " << pe[i] + 1 << endl;
    }
    
    return 0;
}