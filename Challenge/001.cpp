#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define REP(i, m, n) for (ll i=(ll)(m); i < (ll)(n); ++i)
#define ln cout<<'\n'
void pr(){ln;}
template<class A, class...B>void pr(const A &a, const B &...b){cout<<a<<' ';pr(b...);}

void solve() {
	ll x;cin >> x;
	ll ans=0;
	for (ll i = 3; i < x; ++i) {
		if (i%3 == 0 || i%5 == 0) ans+=i;
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	solve();
	return 0;}
