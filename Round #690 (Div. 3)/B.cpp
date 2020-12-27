#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fori(i, n) for (int i = 0; i < n; ++i)

typedef long long ll;
typedef vector<long long> vi;
typedef pair<long long, long long> pi;

double eps = 1e-9;

using namespace std;

string if_2020(string str, ll n) {
    if (n < 4) {
        return "NO";
    }

    if (n == 4) {
        if (str == "2020")
            return "YES";
        else
            return "NO";
    }

    if (n > 4) {
        ll num_of_deletions = n - 4;
        fori(i, n - num_of_deletions + 1) {
            string str_cpy = str;
            str_cpy.erase(i, num_of_deletions);
            if (str_cpy == "2020") return "YES";
            /* cout << str_cpy << "\n"; */
        }
    }

    return "NO";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    fori(k, t) {
        ll n;
        string str;

        cin >> n;
        cin >> str;

        cout << if_2020(str, n) << "\n";
    }
}
