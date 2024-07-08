#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t = 1 ;  
    // cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i] ;
        }
        sort(a,a+n);
        int temp = n , mx = 0 ;
        for(int i=0 ;i<n;i++){
            mx = max(mx,a[i]*temp);
            temp--;
        }
        cout << mx << nl;
    }
    return 0;
}