#include <iostream>
#include <cmath>
using namespace std;

#define pi 3.14159265

int main() {
    double h, v;
    cin >> h >> v;

    double hasil_sin = sin(v * pi/180);

    int rumus = static_cast<int>(ceil(h / hasil_sin));
    
    cout << rumus;
}
