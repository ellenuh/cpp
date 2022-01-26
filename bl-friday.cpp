#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> outcome(6), ind(100);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    ind[a - 1] = i + 1;
    outcome[a - 1]++;
  }
  int ans = -1;
  for (int i = 5; i >= 0; i--) {
    if (outcome[i] == 1) {
      ans = ind[i];
      break;
    }
  }
  if (ans == -1) {
    cout << "none" << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}

// w/ vector
