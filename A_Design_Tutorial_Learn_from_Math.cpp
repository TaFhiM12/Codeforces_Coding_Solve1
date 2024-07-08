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

int32_t main()
{
    optimize();
    int mx = 1e6;
    seive(mx);
    int n ; cin >> n ;
    int x = 2 , y = n-2 ;
    while(x<=y){
        if(isPrime[x] != 1 && isPrime[y] != 1 ) {cout << x << " " << y << nl ;return 0 ;}
        else {
            x++;
            y--;
        }
    }
    return 0;
}