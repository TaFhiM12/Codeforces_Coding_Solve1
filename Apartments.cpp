#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , m , k ;
    cin >> n >> m >> k ; 
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    // for(auto u : a) cout << u << " ";
    // cout << nl ;
    // for(auto u : b) cout << u << " ";
    // cout << nl ;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt = 0 , i = 0 , j = 0 ;
    while(i<n && j<m){
        if(abs(a[i]-b[j]) <= k){
            cnt++;
            i++;
            j++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else {
            i++;
        }
    }
    cout << cnt << nl;
    return 0;
}