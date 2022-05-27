#include <vector>

void display_misses(int misses);

// Declare functions
void greet();
void end_game(std::string answer, std::string codeword);
void print_incorrect(std::vector<char> incorrect_guesses);
void print_current_answer(std::string answer);
void display_status(std::vector<char> incorrect_guesses, std::string answer);