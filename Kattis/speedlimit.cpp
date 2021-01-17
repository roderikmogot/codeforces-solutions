#include<iostream>
using namespace std;

int main() {
    int test;
    while (cin >> test && test != -1){
        int temp = 0, save = 0;
        int hour, time;
        while(test--){
            cin >> hour >> time;
            save = save + hour * (time - temp);
            temp = time;
        }
        cout << save << " miles" << endl;
    }
}