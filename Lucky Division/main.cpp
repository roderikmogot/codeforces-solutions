#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str = to_string(n);
    
    if(n == 47 || n % 4 == 0 || n % 7 == 0)cout << "YES";
    else cout << "NO";
    return 0;
}
