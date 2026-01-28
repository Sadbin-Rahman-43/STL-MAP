#include <bits/stdc++.h>
using namespace std;

// ============================= TYPEDEFS ===============================
// Common type aliases for competitive programming
using ll = long long;           // 64-bit integer
using ull = unsigned long long; // Unsigned 64-bit
using ld = long double;         // High precision float
using pii = pair<int, int>;     // Pair of integers
using pll = pair<ll, ll>;       // Pair of long longs
using vi = vector<int>;         // Vector of ints
using vl = vector<ll>;          // Vector of long longs
using vvi = vector<vi>;         // 2D vector of ints
using vvl = vector<vl>;         // 2D vector of long longs
using vpii = vector<pii>;       // Vector of pairs
using str = string;             // Shorter string alias

#define rep(i, a, n) for (int i = (a); i < (n); i++)      // Loop from a to n-1
#define repan(i, a, n) for (int i = (a); i <= (n); i++)   // Loop from a to n (inclusive)
#define per(i, a, n) for (int i = (n) - 1; i >= (a); i--) // Reverse loop
#define pb push_back
#define eb emplace_back // Faster than push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define each(x, v) for (auto &x : v)       // Range-based for loop
#define mset(a, v) memset(a, v, sizeof(a)) // Fast array initialization
#define sb(v) sort(all(v))                 // Sort ascending
#define bs(v) sort(rall(v))                // Sort descending
#define rs(v) reverse(all(v))              // Reverse vector

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr); // Fast I/O
const int N = 100 * 1000 + 13;
 
int n;
int a[N];
 
bool read () {
	if (scanf("%d", &n) != 1)
		return false;
	rep(i,0, n)
		scanf("%d", &a[i]);
	return true;
}
 
void solve()
{
     read ();
    cin >> n;
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    ll ans = 0;
    rep(z, 1, 31)
    {
        int x = 1 << z;
        map<int, int> cnt;
        rep(i, 0, n)
        {
            if (cnt.count(x - a[i]))
                ans += cnt[x - a[i]];
            ++cnt[a[i]];
        }
    }
printf("%lld\n", ans);}

int main()
{
    fastio;
    int t = 1;
    // cin >> t;
    rep(i, 0, t) solve();
    return 0;
}