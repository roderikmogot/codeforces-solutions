#include <iostream>
#include <numeric>
#include <vector>
using namespace std;



int main() {
    long long temp = 0;
    for(long long i = 2; i <= 2000000; i++)
    {
        bool check = true;
        for(long long j = 2; j <= i/2; j++)
            if(i % j == 0){
                check = false;
                break;
            }
        if(check)
            temp += i;
    }

    cout << temp;

    return 0;
}
