#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> rooms;
    string direction_ayu[] {}, direction_budi[] {};
    int i = 0, num, students, directions;
    cin >> num;

    while(i < num){
        cin >> students;
        int num_students = students;
        rooms.push_back(num_students);
        if(cin.peek() == '\n'){
            break;
        }
        i++;
    }

    int j = 0;
    while(true){
        cin >> directions;
        direction_ayu[j] = directions;
        if(cin.peek() == '\n')break;
        j++;
    }

    int k = 0;
    while(true){
        cin >> directions;
        string directions_to_budi = directions;
        direction_budi[k] = directions_to_budi - 1;
        if(cin.peek() == '\n')break;
        k++;
    }

    int students_ayu = 0;
    for(int l = 0; l < rooms.size(); l++){
        if(direction_ayu[0] == "1" && direction_ayu[1] == "left"){
            students_ayu = rooms.at(0);
            break;
        }else if(direction_ayu[0] == "1" && direction_ayu[1] == "right"){
            students_ayu = rooms.at(1);
            break;
        }else{

        }
    }
    return 0;
}
