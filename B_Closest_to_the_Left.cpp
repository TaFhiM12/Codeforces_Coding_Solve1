#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx  =  1e5 ;
int n , k , num[mx] ;

int32_t main()
{
    optimize();
    int n , k ;  cin >> n >> k ;
    for(int i=0;i<n;i++) cin >> num[i] ;
    while(k--){
        int a ; cin >> a ;
        auto it =  upper_bound(num,num+n,a) - num ;
        cout << it << nl;
    }
    return 0;
}