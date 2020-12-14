#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long count_plates(long long n, long long m, long long a) {

    long long x_plates = (n % a == 0) ? n / a : n / a + 1;
    long long y_plates = (m % a == 0) ? m / a : m / a + 1;



    return x_plates * y_plates;

}


int main() {


    long long n, m, a;
    cin >> n >> m >> a;

    cout << count_plates(n, m, a);

}
