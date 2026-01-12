#include <bits/stdc++.h>
using namespace std;

/*
  Demo problem for the portfolio PDF pipeline.

  Task: Given n >= 0, compute sum_{i=1..n} i = n(n+1)/2.

  Purpose: Exercise code inclusion and asymptotic discussion.
*/

long long triangular_number(long long n) {
    // O(1) time, O(1) space
    return n * (n + 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    if (!(cin >> n)) return 0;
    cout << triangular_number(n) << "\n";
    return 0;
}
