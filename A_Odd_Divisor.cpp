#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

vector <int> v = {2,3,4,5,6,7,8,9};
void solve(int n){
    while(n%2 == 0){
        n /= 2;
    }
    if(n == 1 ) cout << "NO" << nl;
    else cout << "YES" << nl ;
}

int32_t main()
{
    optimize();
    int t ;
    cin >> t ;
    while(t--){
        int n ; cin >> n ;
        solve(n);
    }
    return 0;
}