#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , l , r ;  
    cin >> n >> l >> r ;
    vector <int> v(n+1) ;
    for(int i= 1 ; i<=n ; i++) v[i] = i ;
    reverse(v.begin()+l , v.begin()+r+1);
    for(int i=1; i<=n ; i++) cout << v[i] << " ";
    cout << nl ;
    return 0;
}