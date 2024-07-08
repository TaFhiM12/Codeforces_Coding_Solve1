#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);
 const int mx=100000000;
 bool prime[mx+1];
 void seive()
 {
     memset(prime,true,sizeof(prime));
     for (int i = 2; i <= mx; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= mx; j += i)
                prime[j] = false;
        }
    }
 }

 int32_t main()
 {
     optimize();
     seive();
     int cont=1;
     cout<<"2"<<'\n';
     for(int i=3;i<=mx;i+=2)
     {
         if(prime[i])
         {
             cont++;
             if(cont%100==1)
             {
                 cout<<i<<'\n';
             }
         }
     }
     return 0;
 }