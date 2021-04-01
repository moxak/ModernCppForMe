// The prime number is smaller than given number

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define REP(i, m, n) for (ll i=(ll)(m); i < (ll)(n); ++i)
#define ln cout<<'\n'
void pr(){ln;}
template<class A, class...B>void pr(const A &a, const B &...b){cout<<a<<' ';pr(b...);}

bool is_prime(int const num) {
	if (num <= 3) {
		return num > 1;
	} else if (num % 2 == 0 || num % 3 == 0) {
		return false;
	} else {
		for (int i = 5; i * i <= num; i += 6) {
			if (num % i == 0 || num % (i + 2) == 0) {
				return false;
			}
		}
		return true;
	}
}

void solve() {
	int x;cin >> x;
	for (int i = x-1; 1 < i; --i) {
		if (is_prime(i)) {cout << i << endl;break;}
	}
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	solve();
	return 0;}
