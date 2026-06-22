#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    FAST_IO;

    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    
    if(b > m * a){
        cout << n * a << endl;
    } else{
        ll specialTicket = n / m;
        ll singleTicket = n % m;
        ll cost = (specialTicket * b) + min(singleTicket * a, b);
        cout << cost << endl;
    }
    
    return 0;
}