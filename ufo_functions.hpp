#include <vector>
#include <cstdlib>

void display_misses(int misses);

// Declare functions
void greet();

std::string choose_codeword();

void end_game(std::string answer, std::string codeword);

void display_status(std::vector<char> incorrect, std::string answer);
