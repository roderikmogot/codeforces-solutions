#include <iostream>
using namespace std;

/*
 * Write a program that computes the difference between non-negative integers.

Input
Each line of the input consists of a pair of integers. Each integer is between 0 and 10^15 (inclusive). The input is terminated by end of file.

Output
For each pair of integers in the input, output one line, containing the absolute value of their difference.
 */

int main() {

    const unsigned long long int max_value = 1000000000000000; // 10 ^ 15
    unsigned long long int a, b;
    while(cin >> a >> b){
        if(a <= max_value && b <= max_value){
            cout << ( a < b ? b - a : a - b) << endl;
        }
    }
}
