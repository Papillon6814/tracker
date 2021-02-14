#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vii = vector<vector<int>>;
using vll = vector<vector<ll>>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using Pi = pair<int , int>;
using Pl = pair<ll, ll>;
using vpi = vector<Pi>;
using vpl = vector<Pl>;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define REP(n) for (ll i = 0; i < n; i++)
#define repint(i, n) for (int i = 0; i < n; i++)
#define rep2(i, s, n) for (int i = (s); i < n; i++)
#define REP2(s, n) for (int i = (s); i < n; i++)
#define rep3(i ,j, n, m) rep(i, n)rep(j, m)
#define REP3(n, m) rep(i, n)rep(j, m)
#define sort(A) sort(A.begin(),A.end());
#define reverse(A) reverse(A.begin(),A.end());
#define k(s) cout << fixed << setprecision(s);
const long double pi=3.14159265358979323846;
const long long MOD=1000000007;

int main() {
    int n;
    cin >> n;
    int h[1000010][3];
    int dp[1000010][3];
    rep(i, n) {
        rep(j, 3) {
            cin >> h[i][j];
        }
    }

    rep(i, n) {
        rep(j, 3) {
            rep(k, 3) {
                if(k==j) continue;
                dp[i+1][k] = max(dp[i+1][k], dp[i][j]+h[i][k]);
            }
        }
    }

    int ans = INT_MIN;
    REP(3) ans = max(ans, dp[n][i]);

    cout << ans << endl;
}