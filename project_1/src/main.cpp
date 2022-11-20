#include <iostream>
#include "game.hpp"

using namespace std;

int main()
{
    char if_start;
    int question_number = 0;
    Level game_level = Level::EASY;
    cout << "Do you want to start? (Y/N)" << endl;
    while(true){
        cin >> if_start;
        if(if_start == 'Y'){
            cout << "Please select the question number?" << endl;
            cin >> question_number;
            cout << "Please set the question difficulty level?" << endl;
            cin >> game_level;

            Game game(question_number, game_level);
            game.play();
            game.display_score();
            game.display_time_record();

            cout << "Do you want to play it again? (Y/N)" << endl;
        }
        else{
            cout << "Game Over!" << endl;
            break;
        }
    }
}
