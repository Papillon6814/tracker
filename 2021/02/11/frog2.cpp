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
#define rep3(i ,j, n, m) rep(i,n)rep(j,m)
#define REP3(n, m) rep(i,n)rep(j,m)
#define sort(A) sort(A.begin(),A.end());
#define reverse(A) reverse(A.begin(),A.end());
#define k(s) cout << fixed << setprecision(s);
const long double pi=3.14159265358979323846;
const long long MOD=1000000007;

int main() {
    int n, k;
    cin >> n >> k;
    int h[n];
    int dp[1000010];

    REP(n) {
        cin >> h[i];
        dp[i] = INT_MAX;
    }

    dp[0] = 0;
    for(int i=0; i<n; i++) {
        for(int j=1; j<=k; j++) {
            dp[i+j] = min(dp[i+j], dp[i]+abs(h[i]-h[i+j]));
        }
    }

    cout << dp[n-1] << endl;
}