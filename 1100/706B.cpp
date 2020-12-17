#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> get_markets_num(int prices_num, vector<int> prices, int days_num,
                            vector<int> money) {
    vector<int> markets_num;

    sort(prices.begin(), prices.end());

    for (auto amount : money) {
        markets_num.push_back(
            upper_bound(prices.begin(), prices.end(), amount) - prices.begin());
    }

    return markets_num;
}

int main() {
    int prices_num;
    cin >> prices_num;

    int price;
    vector<int> prices;
    for (int i = 0; i < prices_num; ++i) {
        cin >> price;
        prices.push_back(price);
    }

    int days_num;
    cin >> days_num;

    int amount;
    vector<int> money;
    for (int i = 0; i < days_num; ++i) {
        cin >> amount;
        money.push_back(amount);
    }

    vector<int> markets_num =
        get_markets_num(prices_num, prices, days_num, money);
    for (auto i : markets_num) {
        cout << i << "\n";
    }
}
