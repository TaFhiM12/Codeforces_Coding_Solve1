#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    string str ; 
    cin >> str ;
    bool check = true ;
    for(int i=1;i<str.size(); i++){
        if(islower(str[i])) check = false;
    }

    if(check){
        if(islower(str[0])) str[0] = toupper(str[0]);
        else str[0] = tolower(str[0]);
        transform(str.begin()+1,str.end(),str.begin()+1 , :: tolower);
    }

    cout << str << nl ;
    return 0;
}