#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void solve(int n , string str){
    string temp = str, rv = str;
    reverse(rv.begin(), rv.end());
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    for(int i = 0; i < temp.size(); i++){
        int a = str.find(temp[i]);           
        int b = rv.find(temp[i]);          
        b = n - b - 1;                       
        for(int j=a ; j<=b ; j++){
            if(temp[i] != str[j]){
                cout << "NO" << nl ;
                return ;
            }
        }
    }

    cout << "YES" << nl ;
}

int32_t main()
{
    optimize();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string str; cin >> str;
        solve(n, str);
    }
    return 0;
}
