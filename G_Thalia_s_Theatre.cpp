#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t; cin >> t;
    while (t--)
    {
        int n , sum = 0 , x ; cin >> n ;
        for (int i = 1; i <= n; i++){
            cin >> x;
            sum += x;
        }
        cout << sum - n + 1 << nl ;
    }
    return 0;
}