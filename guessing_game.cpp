#include <iostream>  

using namespace std;

int main(){

    string correct_answer = "Cristiano_Ronaldo";
    string competitor_answer;
    int guessed_attempts = 0;
    int allowed_attempts = 5;
    bool OutOfGuess = false;


    while(correct_answer != competitor_answer && !OutOfGuess){
         
        if(guessed_attempts < allowed_attempts)
        {
        cout << "Who is the GOAT? : ";
        cin >> competitor_answer;
        guessed_attempts++;
        }else{
           OutOfGuess = true;
        }
    }

    if(OutOfGuess){
        cout << "You Lose!";
    }else{
        cout << "You Win!";
    }



    return 0;}



