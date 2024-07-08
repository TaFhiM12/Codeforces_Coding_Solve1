#include<bits/stdc++.h>
#define eb emplace_back
#define nl "\n" 
using namespace std ;
typedef vector<int> vi ;
#define int long long
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

bool checkPrimeNumber(int n){
    if(n==1) return false;
    else{
        for(int i=2 ; i<=n/2 ; i++){
            if(n%i == 0) return false;
        }
        return true;
    }
}

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    // checkPrimeNumber(n);
    if(checkPrimeNumber(n)) cout << "NO PUNISHMENT" << nl;
    else {
        for(int i=0;i<n ; i++){
            cout << "I DID NOT DO THE ASSIGNMENT."<<nl;
        }
    }
    return 0;
}