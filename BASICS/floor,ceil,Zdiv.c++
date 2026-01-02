#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    double div = (double)a / b;

    int floorVal = floor(div);
    int ceilVal  = ceil(div);

    cout << floorVal << " " << ceilVal;
    return 0;
}
