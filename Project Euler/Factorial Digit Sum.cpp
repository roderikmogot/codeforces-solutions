#include <iostream>
using namespace std;

int main() {

    long long temp=1;

    for(int i = 1; i <= 20; i++)
    {
        temp *= i;
    }

    cout << temp;
    return 0;
}
