#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e7 + 123 ;
bitset<mx> isPrime ;
vector <int> prime;

bool pnc(int p){
    isPrime[2] = 1 ;
    for(int i=3 ; i<=mx ; i += 2)  isPrime[i] = 1 ;
    int n = sqrt(mx);
    for(int i=3 ; i<=n ; i += 2){
        if(isPrime[i]) {
            for(int j= i*i ; j<=mx ; j += i){
                isPrime[j] = 0 ;
            }
        }
    }
    
    prime.push_back(2);
    for(int i=3 ; i<=mx ; i++){
        if(isPrime[i]){
            prime.push_back(i);
        }
    }
    return isPrime[p];
}

bool pnc(int p ){
    int cnt = 0 ;
    for(int i=1 ; i*i <= p ; i++){
        if(p%i == 0){
            cnt++;
            if(p/i != i){
                cnt++;
            }
        }
    }

    if(cnt == 2) return true;
    else return false;
}

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    if(pnc(n)) cout <<n << " is a prime Number." << endl;
    else cout << "n is not a prime number." << endl;
    return 0;
}