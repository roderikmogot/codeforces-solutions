#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char in[100];
    cin >> in;

    int streak;
    for(int i = 1; i <= strlen(in); i ++){
        if(in[i] == in[i-1]){
            streak ++;
            if(streak == 7){
                cout << "YES";
                return 0;
            }
        }
        else streak = 1;
    }
    cout << "NO";
}
