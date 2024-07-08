#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    fraction(10);
    set<double> st;
    int p ; cin >> p ;
    while(p--){
        double a , b ;
        cin >> a >> b ;
        st.insert(a+b);
        st.insert(a-b);
        st.insert(b-a);
        st.insert(b*a);
        st.insert(b/a);
        st.insert(a/b);
        cout << st.size() << nl ;
        st.clear();
    }
    return 0;
}