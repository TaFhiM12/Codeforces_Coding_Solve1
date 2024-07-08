#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e3 + 123;
vector<int> d[mx];

int32_t main()
{
    optimize();
    int lim = 1024 ;
    for(int i=1;i<=lim ;i++){
        for(int j=i ; j<=lim ; j += i){
            d[j].push_back(i) ;
        }
    }

        for(auto u : d[1024]) cout << u << " ";
        cout << endl ;
    
    return 0;
}