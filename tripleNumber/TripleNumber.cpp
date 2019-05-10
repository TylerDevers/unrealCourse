
#include <iostream> 
#include <ctime>
// # = preprocessor directive - simply gives instructions to the compiler
// iostream = header file

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty; 
    // :: is the 'scope operator', std is our 'namespace'
    std::cout << " secure server room...  \nEnter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare three number code
    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty;
    int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum  = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "There are three numbers in the code" << std::endl;
    std::cout << "The codes add-up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl;
    
    int GuessA, GuessB, GuessC, GuessSum, GuessProduct;
    std::cin >> GuessA >> GuessB >> GuessC;

    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "you've extraced a file!!\n\n\n\n";
        return true;
    }
    else
    {
        std::cout << "you've Failed to get the file!\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); //uses ctime preprocessor modefier to seed rand with a new number each iteration

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels are finished
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clears any errors to keep input working
        std::cin.ignore(); // Clears the buffer of whatever statement caused the intial error

        if (bLevelComplete)
        {
            // increase level difficulty
            ++ LevelDifficulty;
        }
        
    }
    std::cout << "Good work agent, you've cracked the system! \n";
    return 0;
}
