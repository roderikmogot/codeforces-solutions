#include <iostream>
#include <vector>
using namespace std;

long long sum_of_sequence(long long n)
{
    if(n == 1)
    {
        return 1;
    }else{
        return n + sum_of_sequence(n-1);
    }
}

int main() {
    long long i = 1;
    bool loop = true;

    for(;i <= 20000; i++){
        int divisor = 0;
        long long num = sum_of_sequence(i);
        cout << num << ": ";
        for(long long j = 1; j <= num; j++){
            if(num%j == 0){
                cout << j << " ";
                divisor += 1;
            }
        }
        cout << endl;
        if(divisor == 500){
            cout << i << endl;
            break;
        }
    }

    return 0;
}
