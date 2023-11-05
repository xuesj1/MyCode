#include <bits/stdc++.h>
using namespace std;
int pz(int n) {
  if (n == 1)
    return 1;
  else if (n == 2)
    return 3;
  else {
    return pz(n - 1) + 2 * pz(n - 2);
  }
}

int main() {
  int n = 0;
  cin >> n;
  cout << pz(n) << endl;
  return 0;
}