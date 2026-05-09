#include <iostream>
using namespace std;
long long xorUpto(long long n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long l, r;
    cin >> l >> r;
    long long result = xorUpto(r) ^ xorUpto(l - 1);
    if (result % 2 == 0) cout << "even\n";
    else cout << "odd\n";
    return 0;
}
