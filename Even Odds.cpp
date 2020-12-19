#include <iostream>
using namespace std;
 
int main() {
    long long t, a;
    cin >> t >> a;
    if (a<=(t+1)/2)
    {
        cout << a*2-1 << endl;
    }
    else
    {
        cout << (a-(t+1)/2)*2 << endl;
    }
    return 0;
}
