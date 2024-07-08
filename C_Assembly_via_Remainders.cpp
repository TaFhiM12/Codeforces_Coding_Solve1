#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t ; cin >> t ;
    while(t--){
        int n ; cin  >> n ;
        vector<int> v(n) ,a(n-1);
        for(int i=0 ;i<n-1 ; i++) cin >> a[i];
        int temp = *max_element(a.begin(),a.end());
        v[0] = temp + 1;
        for(int i=0 ; i<n-1;i++){
            v[i+1] = v[i] + a[i];
        }
        for(auto u : v) cout << u << " ";
        cout << nl ;
    }
    return 0;
}