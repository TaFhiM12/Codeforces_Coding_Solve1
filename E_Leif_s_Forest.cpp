#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    string str ; cin >> str ;
    string temp = "" ;
    for(int i=0 ; i<str.size() ; i++){
        if(str[i] != '<')  temp += str[i] ;
        else if(str[i] == '<') temp.pop_back();
    }
    cout << temp << nl ;
    return 0;
}