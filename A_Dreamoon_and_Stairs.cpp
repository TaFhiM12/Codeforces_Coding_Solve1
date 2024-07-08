#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void solve(int n , int m )
{
    vector<int> v;
    for (int i = m; i <= n; i += m)
    {
        if (i * 2 >= n)
            v.push_back(i);
    }
    // for(auto u : v) cout<< u << " ";
    // cout << nl ;
    for(auto u : v){
        int i=u , j = 0 ;
        while(i>j){
            // cout << "i : " << i << " "<< "j :" << j << nl;
            if(i*2 + (n-i*2)*1 == n) 
            {
                cout << u << nl ;
                return ;
            }
            else i--,j++;
        }
    }
    cout << -1 << nl ;
}

int32_t main()
{
    optimize();
    int n, m;
    cin >> n >> m;
    if (n < m)
        cout << -1 << nl;
    else
    {
        solve(n,m);
    }
    return 0;
}