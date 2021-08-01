#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 0 ; i < n ; i++)
#define FOR1(i, n) for(int i = 1 ; i <= n ; i++)

int N;
long long road[100001], price[100001];
long long now_price; long long cost = 0;

int main() {
	cin >> N;
	FOR(i, N - 1) cin >> road[i];
	FOR(i, N) cin >> price[i];

	now_price = price[0]; // 맨 처음 지점에서는 무조건 주유하고 시작

	FOR(i, N-1) {			
		cost += now_price * road[i];

		if (now_price > price[i+1])  // 다음에 경유할 곳의 유가가 더 싼 경우, now_price를 갱신
			now_price = price[i+1];
	}

	cout << cost << '\n';
}
