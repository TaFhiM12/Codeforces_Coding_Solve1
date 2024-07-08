#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e7 + 123 ;
vector<int> primes;
bitset<mx>isprime;
void seive(){
    isprime[2] = 1 ;
    for(int i=3 ; i<=mx ; i += 2) isprime[i] = 1 ;
    int sq =  sqrt(mx);
    primes.push_back(2);
    for(int i=3 ; i<=sq ; i+=2){
        if(isprime[i]){
            primes.push_back(i);
            for(int j = i*i ; j<=mx ; j += i){
                isprime[j] = 0;
            }
        }
    }
}

vector <int> primeFactorization(int n){
    vector <int> factor ;
    for(auto u : primes){
        if(1LL * u * u > n) break ;
        if(n%u == 0){
            while(n%u == 0){
                factor.push_back(u);
                n = n/u ;
            }
        }
    }
    if(n>1) factor.push_back(n);
    return factor;
}

int32_t main()
{
    optimize();
    seive();
    vector <int> factor = primeFactorization(93);
    for(auto u : factor) cout << u << nl ;
    return 0;
}