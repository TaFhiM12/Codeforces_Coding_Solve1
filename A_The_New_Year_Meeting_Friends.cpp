#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int a[3];
    for(int i=0;i<3;i++) cin >> a[i];
    sort(a,a+3);
    cout << a[2]-a[0] << nl ;
    return 0;
}