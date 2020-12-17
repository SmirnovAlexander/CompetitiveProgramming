#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fori(i, n) for (int i = 0; i < n; ++i)

typedef long long ll;
typedef vector<long long> vi;
typedef pair<long long, long long> pi;
typedef set<long long> si;

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

    vi vec1;
    fori(i, n - 1) {
        cin >> elem;
        vec1.pb(elem);
    }

    vi vec2;
    fori(i, n - 2) {
        cin >> elem;
        vec2.pb(elem);
    }

    sort(vec.begin(), vec.end());
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    vi diff1;
    set_difference(vec.begin(), vec.end(), vec1.begin(), vec1.end(),
                   inserter(diff1, diff1.end()));

    vi diff2;
    set_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(),
                   inserter(diff2, diff2.end()));

    for (auto i : diff1) {
        cout << i << "\n";
    }

    for (auto i : diff2) {
        cout << i << "\n";
    }

}
