#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n, x, a;
    while (cin >> n) {
        stack<int> st;
        priority_queue<int> pq;
        queue<int> q;
        int isstack = 1, ispq = 1, isque = 1;
        for (int i = 1; i <= n; i++) {
            cin >> x >> a;
            if (x == 1) {
                pq.push(a);
                q.push(a);
                st.push(a);
            } else if (x == 2) {
                if (st.size() > 0 and st.top() == a) {
                    st.pop();
                } else {
                    isstack = 0;
                }

                if (pq.size() > 0 and pq.top() == a) {
                    pq.pop();
                } else {
                    ispq = 0;
                }

                if (q.size() > 0 and q.front() == a) {
                    q.pop();
                } else {
                    isque = 0;
                }
            }
        }
        if (ispq + isque + isstack > 1) {
            cout << "not sure" << '\n';
        } else if (isstack + isque + ispq == 0) {
            cout << "impossible" << '\n';
        } else {
            if (ispq) {
                cout << "priority queue" << '\n';
            } else if (isque) {
                cout << "queue" << '\n';
            } else {
                cout << "stack" << '\n';
            }
        }
    }
    return 0;
}