#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    //number of flips bits to create m from n ...
    int n , m ; cin >> n >> m ;
    int temp = ( n ^ m) ;
    int cnt = 0 ;
    while(temp){
        temp = temp&(temp-1);
        cnt++;
    }
    cout << "No. of flips : " << cnt << nl;
    return 0;
}