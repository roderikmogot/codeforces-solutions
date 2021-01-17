#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int res = 2 * a + 100;
    if(res > b) cout << res-b;
    else cout << b - res;
    return 0;
}
