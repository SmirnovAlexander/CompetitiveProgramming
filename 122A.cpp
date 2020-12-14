#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> lucky_numbers = {4, 7};

vector<int> get_digits(int n) {
    vector<int> digits;
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    return digits;
}

bool if_luck(int n) {
    vector<int> digits = get_digits(n);

    for (int& digit : digits) {
        if (!(find(lucky_numbers.begin(), lucky_numbers.end(), digit) !=
              lucky_numbers.end())) {
            return false;
        }
    }

    return true;
}

string if_ok(int n) {
    for (int i = 4; i <= n; ++i) {
        if (if_luck(i) && n % i == 0) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int n;
    cin >> n;

    /* cout << if_ok(n); */
    cout << if_ok(n);
}
