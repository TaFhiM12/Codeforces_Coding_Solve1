#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int z=n/2;
    if((x==z and y==z) or (x==z and y==z+1) or (x==z+1 and y==z) or (x==z+1 and y==z+1)) cout<<"NO";
    else cout<<"YES";
    return 0;
}