#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> vowels = {'a', 'o', 'y', 'e', 'u', 'i'};

string change_string(string input) {
    string result_str = "";

    for (char& c : input) {
        char c_lowered = tolower(c);

        // if char is not vowel
        if (!(find(vowels.begin(), vowels.end(), c_lowered) != vowels.end())) {
            result_str += '.';
            result_str += c_lowered;
        }
    }

    return result_str;
}

int main() {
    string input;
    cin >> input;

    cout << change_string(input);
}
