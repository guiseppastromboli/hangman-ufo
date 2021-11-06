#include <iostream>
#include "ufo_functions.hpp"

int main() {

  bool play = true;

  greet();

  while(play){

    char input;

    std::string codeword = choose_codeword();
    std::string answer = std::string(codeword.length(), '_');

    int misses = 0;

    std::vector<char> incorrect;

    bool guess = false;

    char letter;

    //turn
    while (answer != codeword && misses < 7){
      //std::cout << misses << "\n";
      display_misses(misses);

      display_status(incorrect, answer);

      std::cout << "Please enter your guess:\n";
      std::cin >> letter;

      letter = tolower(letter);

      for (int i = 0; i < codeword.size(); i++){
        if (letter == codeword[i]){
          answer[i] = letter;
          guess = true;
        }
      }

      if (guess){
        std::cout << "Correct!\n\n";
      }

      else{
        std::cout << "Incorrect! The tractor beam pulls the person in further.\n\n";
        incorrect.push_back(letter);
        misses++;
      }
      guess = false;
    }

    end_game(answer, codeword);

    std::cout << "Type 'y' if you wanna play again. Every other character to quit." << "\n";
    std::cin >> input;

    if (input != 'y'){
      play = false;
    }
  }
}
