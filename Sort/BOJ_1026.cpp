#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 0 ; i < n ; i++)
#define FOR1(i, n) for(int i = 1 ; i <= n ; i++)

int A[51], B[51];

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int N; cin >> N;

	FOR(i, N) cin >> A[i];
	FOR(i, N) cin >> B[i];

	sort(A, A + N);
	sort(B, B + N, compare);

	int count = 0;
	FOR(i, N) {
		count += A[i] * B[i];
	}

	cout << count << '\n';
}
