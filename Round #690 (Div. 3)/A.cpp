#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fori(i, n) for (int i = 0; i < n; ++i)

typedef long long ll;
typedef vector<long long> vi;
typedef pair<long long, long long> pi;

double eps = 1e-9;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    fori(k, t) {
        ll n;
        vi vec;

        cin >> n;
        int elem;
        fori(i, n) {
            cin >> elem;
            vec.pb(elem);
        }

        vi answer;
        fori(i, n) {
            if (i % 2 == 0) {
                answer.pb(vec[i / 2]);
            } else {
                answer.pb(vec[n - i / 2 - 1]);
            }
        }

        fori(i, n) { cout << answer[i] << " "; }
        cout << "\n";
        answer.clear();
        vec.clear();
    }
}
