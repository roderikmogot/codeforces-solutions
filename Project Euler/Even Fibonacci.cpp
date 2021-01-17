#include <iostream>
using namespace std;

int main() {
    int temp = 0, temp_1 = 1, next = 0;
    int sum_even = 0;

    next = temp + temp_1;

    while(sum_even <= 4000000){
        temp = temp_1;
        temp_1 = next;
        next = temp + temp_1;
//        cout << next << " ";
        if(next % 2 == 0){
            sum_even += next;
        }
    }
    cout << endl;
    cout << sum_even << endl;

    return 0;
}
