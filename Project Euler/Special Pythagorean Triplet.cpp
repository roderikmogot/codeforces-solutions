#include <iostream>

using namespace std;
int main() {
    for(int i = 1; i <= 1000; i++){
        for(int j = 1;j<=i; j++){
            for(int k = 1; k<=j; k++)
            {
                if(k*k + j*j == i*i && i+j+k == 1000){
                    cout << i << " " << j << " " << k << endl;
                    cout << i*j*k;
                }
            }
        }
    }
    return 0;
}
