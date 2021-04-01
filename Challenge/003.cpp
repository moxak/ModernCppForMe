// LCM

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define REP(i, m, n) for (ll i=(ll)(m); i < (ll)(n); ++i)
#define ln cout<<'\n'
void pr(){ln;}
template<class A, class...B>void pr(const A &a, const B &...b){cout<<a<<' ';pr(b...);}

void solve() {
	int a, b; cin >> a >> b;
	int ans = 0;
	int i = 1;
	while (1) {
		ans = i * min(a, b);
		if (ans%a==0 && ans%b==0) break;
		++i;
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	solve();
	return 0;}
