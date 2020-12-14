#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int num_seats = 4;

int find_car_num(int n, vector<int> groups) {

    unordered_map<int, int> m;
    for (int i = 1; i <= num_seats; ++i) {
        m[i] = count(groups.begin(), groups.end(), i);
    }

    int num_cars = 0;
    num_cars += m[4];
    m[4] = 0;

    int min_value = min(m[3], m[1]);
    num_cars += min_value;
    m[1] -= min_value;
    m[3] -= min_value;

    num_cars += m[3];
    m[3] = 0;

    num_cars += m[2] / 2;
    m[2] -= 2 * (m[2] / 2);

    if (m[2] == 1) {
        num_cars++;
        m[1] -= 2;
    }

    if (m[1] > 0) {
        num_cars += (m[1] + 3) / 4;
    }

    return num_cars;
}

int main() {
    int n;
    cin >> n;

    int num;
    vector<int> groups;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        groups.push_back(num);
    }

    cout << find_car_num(n, groups);
}
