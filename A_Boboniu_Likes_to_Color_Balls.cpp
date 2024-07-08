#include<bits/stdc++.h>
#define eb emplace_back
#define nl "\n" 
using namespace std ;
typedef vector<int> vi ;
#define int long long
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int r,g,b,w;
bool check()
{
    if((r%2 + g%2 + b%2 + w%2) <= 1 ) return 1 ;
    else return 0;
}

void op(){
    if(r>0 && g>0 && b>0){ r--;g--;b--;w+=3;}
}

int32_t main()
{
    optimize();
    int t ; cin >> t ;
    while(t--){
        cin >> r >> g >> b >> w ;
        if(check()) cout << "Yes"<<nl;
        else{
            op();
            if(check()) cout << "Yes"<<nl;
            else cout << "No"<<nl;
        }
    }
    return 0;
}