#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

std::string codeword = "codecademy";
std::string answer = "";
int misses = 0;

void create_answer()
{
    for (char c : codeword)
    {
        answer += "_";
    }
}

bool calculate_guess(char guess)
{
    bool is_correct = false;
    for (int i = 0; i < codeword.length(); i++)
    {
        if (guess == codeword[i])
        {
            is_correct = true;
            answer[i] = guess;
        }
    }
    return is_correct;
}

void play_game()
{
    std::vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < 7)
    {
        std::cout << "\n\nPlease enter your guess: ";
        std::cin >> letter;
        guess = calculate_guess(letter);

        if (guess)
        {
            std::cout << "Correct!\n";
        }
        else
        {
            std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }

        display_misses(misses);
        display_status(incorrect, answer);
        guess = false;
    }
    end_game(answer, codeword);
}

int main()
{
    create_answer();
    greet();
    play_game();
}
