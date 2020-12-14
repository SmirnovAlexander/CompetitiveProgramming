#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string if_hello(string input) {
    int i = 0;
    for (char& c : input) {
        if (c == "hello"[i]) {
            i += 1;
        }

        if (i == 5) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    string input;
    cin >> input;

    cout << if_hello(input);
}
