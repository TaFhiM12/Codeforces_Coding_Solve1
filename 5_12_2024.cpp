#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int cnt = 0 ;
    string s1 , s2 ; cin >> s1 >> s2 ;
    for(int i=0;i<s1.size();i++){
        if(s1[i] == s2[i]) cnt++;
    }
    cout << cnt << nl;
    return 0;
}