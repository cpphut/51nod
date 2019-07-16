#include<iostream>
#define mod 1000000007
using namespace std;
long long f[50001][320], n, ans;
int main() {
	cin >> n;
	f[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j * j <= 2 * i + 1; j++) {
			f[i][j] = (f[i - j][j] + f[i - j][j - 1]) % mod;
		}
	}
	for (int i = 1; i * i <= 2 * n + 1; i++) {
		ans = (ans + f[n][i]) % mod;
	}
	cout << ans;
	return 0;
}