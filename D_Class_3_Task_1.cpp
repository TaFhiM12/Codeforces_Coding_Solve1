#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e6 + 123 ;
bitset<mx> isprime;
vector <int> primeNumber;

void primeCheck(int n ){
    int sq = sqrt(n);

    isprime[2] = 1 ;
    for(int i=3 ; i<=n ; i += 2) isprime[i] = 1 ;
    for(int i=3 ; i<= sq ; i +=2){
        if(isprime[i]){
            for(int j= i*i ; j<= n ; j += i){
                isprime[j] = 0 ;
            }
        }
    }

    primeNumber.push_back(2);
    for(int i = 3; i<=n ; i++){
        if(isprime[i])
        primeNumber.push_back(i);
    }
}


void solve(int n ){
    for(auto u : prime){
        if(u>n) {
            return;
        }
    }
}

int32_t main()
{
    optimize();
    int lim = 1e6 ;
    primeCheck(lim);
    int n ; 
    while(cin >> n ){
        if(n==0) break;
        solve(n);
    }
    return 0;
}