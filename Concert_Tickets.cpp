#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t , p ;
    cin >> t >> p ;
    multiset<int> mt ;
    for(int i=0;i<t;i++){
        int a ; cin >> a ;
        mt.insert(a);
    }

    for(int i=0 ; i<p ; i++){
        int b ; cin >> b ;
        auto it = mt.upper_bound(b);
        if(it == mt.begin()){
            cout << -1 << nl;
            continue;
        }
        else{
            cout << *(--it) << nl;
            mt.erase(it);
        }
    }
    return 0;
}