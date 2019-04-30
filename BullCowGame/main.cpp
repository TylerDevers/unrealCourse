#include <iostream>
//#include <string>

using namespace std;

int main()
{
    // Introduce the game
    constexpr int WORD_LENGTH = 5; //constant expression used when values will not change, similar to a constant but stronger.
    cout << "Welcome to Bulls and Cows, a fun word game.";
    cout << std::endl; //same as the /n after the string, same as cout << "text here" << endl
    //alternate syntax std::cout when not using namespace

    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram I am thinking of?\n";

    // Get a guess from player
    string Guess = "";
    cin >> Guess; // must use namespace string to get access to >>

    // repeat the guess back to them
    cout << "your guess was " << Guess << endl;

    /* code */
    return 0;
}




