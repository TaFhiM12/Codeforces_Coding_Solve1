#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e7+123;
bitset<mx> isPrime;
vector<int> primes;
int cntPrime[mx];

void seive( int n )
{
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;

    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 ) {
        if(isPrime[i]) {
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);

    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}

vector <int> primeFactorization(int n){
    vector <int> factor ;
    for(auto u : primes){
        if(1LL * u * u > n) break ;
        if(n%u == 0){
            factor.push_back(u);
            while(n%u == 0){
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
    int lm = 1e7 ;
    seive(lm);
    int n ; 
    while(cin >> n ) {
        if(n==0) break ;
        n = abs(n);
        vector <int> factor = primeFactorization(n);
        if(factor.size()<=1) cout << -1 << nl ;
        else {
            cout << factor.back() << nl ;
        }
    }

    return 0;
}