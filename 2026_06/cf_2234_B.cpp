#include <bits/stdc++.h>
#include <cassert>
using namespace std;

using ll = long long;

void solve() {
  ll N;
  cin >> N;

  if (N == 10) {
    cout << -1;
  } else {
    ll a = N % 12;
    if (a == 10) {
      a += 12;
    }
    ll b = N - a;
    assert((a + b) == N);
    cout << a << " " << b;
  }


  cout << "\n";
}

int main(void) {
  ll T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}
