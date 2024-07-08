#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , k ;
    cin >> n >> k ;
    vector<int> v ;
    int sq = sqrtl(n);
    for(int i= 1 ; i<=sq ; i++ ){
        if(n%i == 0){
            v.push_back(i);
            if(n/i != i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k) cout << -1 << nl ;
    else cout << v[k-1] << nl ;
    return 0;
}