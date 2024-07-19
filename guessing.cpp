
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int Num = rand() % 100 + 1; // generating random number
    int guess;
    int turn = 0;

    cout<<"WELCOME TO THE NUMBER GUESSING GAME.!!" << endl;
    cout<<"GUESS the number between 1-100" << endl;

    do {
        cout<<"Enter your guess: ";
        cin>>guess;
        turn++;

        if (guess > Num) {
            cout << "Your guess is too HIGH.!! TRY AGAIN.!!" << endl;

        } else if (guess < Num) {
            cout << "Your guess is too LOW.!! TRY AGAIN.!!" << endl;

        } else {
            cout << "CONGRATS! Your guess is right, Number is: "<< Num<< endl;
            cout<<"You guess the right number in "<<turn<<" attempt.!!!"<<endl;

        }
    } while (guess != Num);
    

    return 0;
}

