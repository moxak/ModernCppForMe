// GCD

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
	int gcd = 1;
	for (int i = 1; i < min(a, b); ++i) {
		if (a%i==0 && b%i==0) gcd = i; 
	}
	cout << gcd << endl;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	solve();
	return 0;}
