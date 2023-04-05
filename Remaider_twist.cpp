//question: https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/remainder-twist-987a698c/

//solution:
#include <bits/stdc++.h>
using namespace std;
 
class reader {
public:
    reader() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    template<typename T>
    reader& operator>>(T& number) {
        cin >> number;
        return *this;
    }
};
 
int main() {
    reader sc;
 
    int t;
    sc >> t;
 
    while (t--) {
        int n, r;
        sc >> n >> r;
 
        vector<long long> dp(n + 2);
 
        long long zero = 0;
 
        for (int i = 1; i <= n; i++) {
            int div = n / i;
            int rem = n - i * div;
 
            dp[rem]++;
            dp[i - 1] += div;
            zero += div;
        }
        dp[0] = zero;
        long long val = 0;
        bool flag = true;
        for (int i = n - 1; i > 0; i--) {
            dp[i] += dp[i + 1];
        }
 
        for (int i = n; i >= 0; i--) {
            val += dp[i];
            if (val >= r) {
                cout << i << "\n";
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << -1 << "\n";
        }
    }
 
    return 0;
} 