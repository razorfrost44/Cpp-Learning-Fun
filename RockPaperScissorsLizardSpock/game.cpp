#include <iostream>
#include <time.h>

int genRandNum()
{
    srand(time(0));
    return rand() % 5;
}

std::string computerChoice()
{
    const int computerChoice = genRandNum();
    switch (computerChoice)
    {
    case 0:
        return "rock";
    case 1:
        return "paper";
    case 2:
        return "scissors";
    case 3:
        return "lizard";
    case 4:
        return "spock";
    default:
        return "rock";
    }
}

std::string calculateWinner(std::string player, std::string comp)
{
    if (player == comp)
    {
        return "Draw!";
    }
    else if (player == "rock")
    {
        if (comp == "paper")
        {
            return "Lose!";
        }
        else if (comp == "scissors")
        {
            return "Win!";
        }
        else if (comp == "lizard")
        {
            return "Win!";
        }
        else // spock
        {
            return "Lose!";
        }
    }
    else if (player == "paper")
    {
        if (comp == "rock")
        {
            return "Win!";
        }
        else if (comp == "scissors")
        {
            return "Lose!";
        }
        else if (comp == "lizard")
        {
            return "Lose!";
        }
        else // spock
        {
            return "Win!";
        }
    }
    else if (player == "scissors")
    {
        if (comp == "rock")
        {
            return "Lose!";
        }
        else if (comp == "paper")
        {
            return "Win!";
        }
        else if (comp == "lizard")
        {
            return "Win!";
        }
        else // spock
        {
            return "Lose!";
        }
    }
    else if (player == "lizard")
    {
        if (comp == "rock")
        {
            return "Lose!";
        }
        else if (comp == "paper")
        {
            return "Win!";
        }
        else if (comp == "scissors")
        {
            return "Lose!";
        }
        else // spock
        {
            return "Win!";
        }
    }
    else if (player == "spock")
    {
        if (comp == "rock")
        {
            return "Win!";
        }
        else if (comp == "paper")
        {
            return "Lose!";
        }
        else if (comp == "scissors")
        {
            return "Win!";
        }
        else // lizard
        {
            return "Lose!";
        }
    }
    else
    {
        return "Win!";
    }
}

int main()
{
    std::string choice;
    std::cout << "Rock Paper Scissors Lizard or Spock?: ";
    std::cin >> choice;
    std::string compChoice = computerChoice();

    std::string result = calculateWinner(choice, compChoice);
    std::cout << "Choice: " << choice << " Computer: " << compChoice << std::endl;
    std::cout << result;
}