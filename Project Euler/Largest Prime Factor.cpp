#include <iostream>

using namespace std;

int main() {
    long long num = 600851475143;
    long long i = 2;
    while(i <= num){
        if(num % i == 0){
            bool checkPrime = true;
            for(long long j = 2; j <= i/2; j++)
            {
                if(i % j == 0)
                {
                    checkPrime = false;
                    break;
                }
            }

            if(checkPrime)
            {
                cout << i << " " << endl;
            }
        }
        ++i;
    }
    return 0;
}
