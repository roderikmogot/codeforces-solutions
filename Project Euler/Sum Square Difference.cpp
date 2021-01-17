#include <iostream>

using namespace std;

int square_of_sum(int n)
{
    if(n == 1)
    {
        return 1;
    }else
    {
        return n + square_of_sum(n-1);
    }
}

int sum_of_square(int m)
{
    if(m == 1)
    {
        return 1;
    }
    else
    {
        return m*m + sum_of_square(m-1);
    }
}

int main() {
    int square_sum = square_of_sum(100) * square_of_sum(100);
    int diff = square_sum - sum_of_square(100);
    cout << diff << endl;
    return 0;
}
