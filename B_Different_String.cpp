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
        string str ; cin >> str ;
        int sz =  str.size();
        string temp =  str ;
        sort(temp.begin(),temp.end());
        int n = unique(temp.begin(),temp.end()) - temp.begin();
        if(n==1) cout << "NO" << nl;
        else{
            cout << "YES" << nl;
            next_permutation(str.begin(),str.end());
            cout << str << nl;
        }
    }
    return 0;
}