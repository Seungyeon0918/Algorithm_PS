#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 0 ; i < n ; i++)
#define FOR1(i, n) for(int i = 1; i<=n ; i++)

// ��� ������ ������ ������ ����

int T;

int main() {
	cin >> T; //�׽�Ʈ ���̽� ��

	while (T--) {
		int N; cin >> N;
		int cnt = 0;

		int dp[11] = { 0 };

		// dp[n] : n�� 1,2,3�� ������ ��Ÿ���� ����� ��
		// dp[n] = dp[n-1] + dp[n-2] + dp[n-3] //��ȭ��

		dp[1] = 1, dp[2] = 2, dp[3] = 4; //�ʱⰪ

			for (int i = 4; i <= N; i++) {
				dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
			}
		cout << dp[N] << '\n';

	}
}