#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    string str = "Tanvir Maht ab Tafh im";
    string temp = "";
    int cnt = 0 ;
    for(int i=0;i<str.size();i++) {
        temp += str[i];
        if(str[i] == ' ') {
            cnt++;
        }
        if(cnt == 4) break;
    }
    cout << temp << nl ;
    return 0;
}