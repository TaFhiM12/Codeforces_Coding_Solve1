#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n, t;
    cin >> n >> t;
    if (n==1 && t == 10 )
        cout << -1 << nl;
    else
    {
        if(t==10){
            int temp = n-2 ;
            for(int i=0;i<temp;i++) cout << 1 ;
            cout << 10 << nl ;
        }
        else{
            for (int i = 1; i <= n; i++)
            cout << t;
            cout << nl ;
        }
    }
    return 0;
}