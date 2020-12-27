#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fori(i, n) for (int i = 0; i < n; ++i)

typedef long long ll;
typedef vector<long long> vi;
typedef pair<long long, long long> pi;

double eps = 1e-9;

using namespace std;

vi sum_vec(ll n) {
    for (int k = 0; k < 10; k++) {
        vi permutation;
        for (int i = 1; i < k; i++) {
            permutation.push_back(i);
        }
        do {
            int sum = 0;
            for (auto& n : permutation) sum += n;
            if (sum == n) {
                return permutation;
            }
        } while (next_permutation(permutation.begin(), permutation.end()));
    }
    return {-1};
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    fori(k, t) {
        ll n;
        cin >> n;

        vi res = sum_vec(n);
        for (auto& n : res) cout << n;
        cout << "\n";
    }
}
