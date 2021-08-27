#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, a, b, c;
		cin >> n >> a >> b >> c;
		vector<long long> f(n);
		for (int i = 0; i < n; i++) {
			cin >> f[i];
		}
		long long time = LLONG_MAX;
		for (int i = 0; i < n; i++) {
			// abs(b - f[i]): distance of Bob to every friend
			// abs(f[i] - a): distance of the Bob's friend from Alice
			time = min(time, abs(b - f[i]) + c + abs(f[i] - a));
		}
		cout << time << '\n';
	}
	return 0;
}
