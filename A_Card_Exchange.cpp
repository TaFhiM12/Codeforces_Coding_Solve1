#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void solve(int n , int k ){

    int a[n];
    map< int , int > mp;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) mp[a[i]]++;
    for(auto i : mp) {
        if( i.second >= k ){
            cout << k-1 << nl;
            return;
        }
    }
    cout << n << nl ;

}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n , k; cin >> n >> k;
        solve(n,k);
    }
    return 0;
}