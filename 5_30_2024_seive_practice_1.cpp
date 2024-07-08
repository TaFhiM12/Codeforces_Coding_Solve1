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

int32_t main()
{
    optimize();
    
    int n ; cin >> n ;
    primeCheck(n);
    int ans1 , ans2 ;
    for(int i= 1 ; i<primeNumber.size() ; i++){
        ans1 = primeNumber[i];
        ans2 = n - ans1;
        if(isprime[ans2] && ans1 != ans2 && ans2 % 2 != 0){
            cout << n << " = " << ans1 << " + " << ans2 << endl ;
            exit(0);
        }
    }
    cout << "Goldbach" << endl ;

    return 0;
}