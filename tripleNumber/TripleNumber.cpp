
#include <iostream> 
// # = preprocessor directive - simply gives instructions to the compiler
// iostream = header file

void PrintIntroduction()
{
    std::cout << "You are a secret agent breaking into a secure server room"; // :: is the 'scope operator', std is our 'namespace'
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";
}

void PlayGame()
{
    PrintIntroduction();

    // Declare three number code
    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 2;

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
        std::cout << "you WIN\n";
    }
    else
    {
        std::cout << "you Lose\n";
    }
}

int main()
{
    while (true)
    {
        PlayGame();
    }
    
    return 0;
}
