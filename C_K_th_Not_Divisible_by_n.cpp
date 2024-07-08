#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void solve(int n , int k ){
	int need = (k - 1) / (n - 1);
	cout << k + need << endl;
}

int32_t main()
{
    optimize();
    int t ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k ;
        solve(n,k);
    }
    return 0;
}