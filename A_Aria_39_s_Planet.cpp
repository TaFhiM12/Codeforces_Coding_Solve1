#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    string str ; cin >> str  ;
    string ans = "";
    char c = str[0] ;
    ans += c ;
    for(int i=1;i<str.size() ;i++){
        if(str[i] != c){
            ans += str[i];
            c =  str[i] ;
        }
    }
    cout << ans << nl ;
    return 0;
}