#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr ll MAX_N = 100 + 10;
ll A[MAX_N];

void solve() {
  ll N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  sort(A, A + N);
  reverse(A, A + N);

  for (int i = 2; i < N; i++) {
    if ((A[i-2] % A[i-1]) != A[i]) {
      cout << -1 << "\n";
      return;
    }
  }

  cout << A[0] << " " << A[1] << "\n";
  return;
}

int main(void) {
  ll T;
  cin >> T;

  while (T--) {
    solve();
  }

  return 0;
}
