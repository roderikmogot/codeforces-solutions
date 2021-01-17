#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> store_data_binus, store_data_enemy;
    int matches, score_binus = 0, score_enemy = 0;
    int i = 0, j = 0;
    cin >> matches;

    while (true) {
        cin >> score_binus;
        int sum = 0;
        sum = score_binus;
        store_data_binus.push_back(sum);
        if (cin.peek() == '\n') {
            break;
        }
        i++;
    }

    while (true) {
        cin >> score_enemy;
        int sum = 0;
        sum = score_enemy;
        store_data_enemy.push_back(sum);
        if (cin.peek() == '\n') {
            break;
        }
        j++;
    }

    int binus_points = 0;

    for(int k = 0; k <= matches-1; k++){
        if(store_data_enemy[k] > store_data_binus[k]){
            binus_points += 0;
        }
        else if(store_data_enemy[k] == store_data_binus[k]){
            binus_points += 1;
        }
        else if(store_data_enemy[k] < store_data_binus[k]){
            binus_points += 3;
        }
    }

    cout << binus_points;
    return 0;
}
