#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n  ; cin >> n ;
    vector<int>v;
    for(int i=0 ; i<n ; i++){
        int a ;
        cin >> a ;
        v.push_back(a);
    }
    for(int i=1 ; i<n ; i++){
        v[i] += v[i-1];
    }

    int q ;
    cin >> q ;
    while(q--){
        int k ; cin >> k ;
        int temp = lower_bound(v.begin(),v.end(),k)-v.begin();
        cout << temp+1 << nl ;
    }
    return 0;
}