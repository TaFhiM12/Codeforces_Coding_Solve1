#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n,m; cin>>n>>m;
    int a[n],sum = 0 ;
    bool f = 0 ;
    for (int i=1;i<=n-1;i++) cin>>a[i];
    for (int i=1;i<n;){
        sum = i+a[i];
        i = sum;
        if (sum == m){
            f = 1;
            break;
        }
    }
    if(f) cout<<"YES" << nl ;
    else cout<<"NO" <<nl;
}