#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;


int num_less_or_equal(vector<int> vec, int n, int k) {

    sort(vec.begin(), vec.end());
    return 1;
}

vector<int> get_markets_num(int prices_num,
                            vector<int> prices,
                            int days_num,
                            vector<int> money) {


    return money;

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

    cout << num_less_or_equal(prices, prices_num, 3);

    /* int days_num; */
    /* cin >> days_num; */

    /* int amount; */
    /* vector<int> money; */
    /* for (int i = 0; i < days_num; ++i) { */
    /*     cin >> amount; */
    /*     money.push_back(amount); */
    /* } */

    /* vector<int> markets_num = */
    /*     get_markets_num(prices_num, prices, days_num, money); */
    /* for (auto i : markets_num) { */
    /*     cout << i; */
    /* } */

}
