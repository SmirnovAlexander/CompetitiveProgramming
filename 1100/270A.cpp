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

    ll n;
    cin >> n;

    vi vec;
    ll elem;
    fori(i, n) {
        cin >> elem;
        vec.pb(elem);
    }

    for (auto elem : vec) {
        if ((360 % (180 - elem)) == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }

    /* cout << upper_bound(vec.begin(), vec.end(), 5) - vec.begin(); */

    /* for (auto i : vec) */
    /*     cout << i << " "; */
}
