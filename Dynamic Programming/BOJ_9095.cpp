#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 0 ; i < n ; i++)
#define FOR1(i, n) for(int i = 1; i<=n ; i++)

// 계단 오르기 문제와 유사한 문제

int T;

int main() {
	cin >> T; //테스트 케이스 수

	while (T--) {
		int N; cin >> N;
		int cnt = 0;

		int dp[11] = { 0 };

		// dp[n] : n을 1,2,3의 합으로 나타내는 방법의 수
		// dp[n] = dp[n-1] + dp[n-2] + dp[n-3] //점화식

		dp[1] = 1, dp[2] = 2, dp[3] = 4; //초기값

			for (int i = 4; i <= N; i++) {
				dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
			}
		cout << dp[N] << '\n';

	}
}
