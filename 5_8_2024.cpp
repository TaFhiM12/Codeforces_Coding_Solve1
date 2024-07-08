#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    int pre[n+1] = {0} ;
    int sum = 0 ;
    for(int i=1 ; i<=n ;i++){
        int a ; cin >> a ;
        sum += a ;
        pre[i] =  sum ;
    }
    for(int i=0 ; i<=n ; i++) cout << pre[i] << " ";
    cout << endl ;
    int q ;
    cin >> q ;
    while(q--)
    {
        int l , r ;
        cin >> l >> r ;
        cout << "sum between l and r :  " <<pre[r] - pre[l-1] << nl ;
    }
    return 0;
}