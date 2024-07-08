#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , m ;
    cin >> n >> m ;
    vector <int> v(n) , u(m) ;
    for(auto &i:v) cin >> i ;
    for(auto &i:u) cin >> i ;
    int remgcd = 0 ;
    for(int i=1;i<n;i+=2){
        remgcd = gcd(remgcd,abs(v[i]-v[0]));
    }

    for(int i=0;i<m;i++){
        cout << gcd(remgcd,v[0]+u[i]) << " ";
    }
    return 0;
}