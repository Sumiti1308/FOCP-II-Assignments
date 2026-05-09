#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 10000000;
int spf[MAXN + 1]; 
void sieve() {
    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            if ((long long)i * i <= MAXN) {
                for (long long j = 1LL * i * i; j <= MAXN; j += i) {
                    if (spf[j] == 0) spf[j] = i;
                }
            }
        }
    }
}
int countDistinctPrimeFactors(int n) {
    int cnt = 0;
    while (n > 1) {
        int p = spf[n];
        cnt++;
        while (n % p == 0) n /= p;
    }
    return cnt;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
  int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int k = countDistinctPrimeFactors(N);
        cout << (1 << k) << "\n"; 
}
return 0;
}
