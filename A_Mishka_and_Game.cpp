#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    int cnt1 = 0 , cnt2 = 0 ;
    for(int i=1;i<=n;i++){
        int a , b ;
        cin >> a >> b ;
        if(a>b) cnt1++;
        else if(a<b) cnt2++;
    }

    if(cnt1 > cnt2) cout << "Mishka" << nl ;
    else if(cnt1<cnt2) cout << "Chris" << nl ;
    else cout << "Friendship is magic!^^" << nl ;
    return 0;
}