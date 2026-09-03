/*
         .-.
       __| |__
      [__   __]
         | |
         | |           Matthew 19:26
         | |  'With man, this is impossible,
         '-'     but with God, all things are possible'
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORELL(i, a, b) for(ll i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define INF 2e9 // 2e9
#define INFLL 2e18 // 2e18
#define esp 1e-9
#define PI 3.14159265

inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

void backtrack(int pos, vector<int> &v, vector<int> &cur)
{
    if(pos == v.size()) {
        FOR(i, 0, cur.size()) {
            cout << cur[i] << " ";
        }
        cout << "\n";
        return;
    }

    cur.push_back(v[pos]);
    backtrack(pos + 1, v, cur);
    cur.pop_back();

    backtrack(pos + 1, v, cur);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n) cin >> v[i];
    vector<int> cur;

    backtrack(0, v, cur);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //int tc;
    //cin >> tc;
    //while(tc--) {
    solve();
    //}

    cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
    return 0;
}
