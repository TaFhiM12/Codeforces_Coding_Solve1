#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n  ;
    cin >> n ;
    int evn = 0 , odd = 0 , pos , pos1 ;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
        if(v[i] & 1 ) {odd++; pos1 = i ;}
        else {evn++; pos = i;}
    }
    if(evn == 1) {
        cout << pos << nl ;
    }
    else if(odd == 1) cout << pos1 << nl ;
    return 0;
}