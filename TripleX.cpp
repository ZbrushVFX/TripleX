#include <iostream>

void PrintIntroduction()
{
// Print welcome message to the terminal
  std::cout << "\n\n You are a secret agent breaking into a secure server room...\n";
  std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame()
{
  const int CodeA = 4;
  const int CodeB = 3;
  const int CodeC = 2;

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  // Print sum and product to the terminal
  std::cout << "+ There are 3 numbers in the code";
  std::cout << "\n+ The codes add-up to:" << CodeSum;
  std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

  // Store player guess
  int GuessA, GuessB, GuessC;
  std::cin >> GuessA >> GuessB >> GuessC;

  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC;

  //Check if the players guess is correct
  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\nYou win!";
    return true;
  }
  else
  {
    std::cout << "\nYou lose!";
    return false;
  }
}


int main()
{
  PrintIntroduction();

  while (true)
  {
    bool  bLevelComplete = PlayGame();
    std::cin.clear(); // Clear any arrors
    std::cin.ignore(); // Discards the buffer
  }

  
  
  return 0;
}