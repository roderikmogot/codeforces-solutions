#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    long temp = 2;
    for(long long i = 1; i <= 1000; i+=2)
        temp *= i;
    cout << temp << endl;

    string check = to_string(temp);
    cout << check;

    int sum = 0;
    for(char c: check){
        int cnv = atoi(c.c_str());
        sum += cnv;
    }

    return 0;
}
