#include <iostream>
#include <vector>
#include <cstdlib>

// Define functions

void greet(){
  std::cout << "=============\n UFO: The Game\n============= \nInstructions: save your friend from alien abduction by guessing the letters in the codeword.\n\n";
}

std::string choose_codeword(){

  char lang;

  bool chosen = false;

  std::vector<std::string> english = {"xylophon", "rhythm", "oxygen", "buzzword", "luxury", "awkward", "bagpipes", "bikini", "blizzard", "buffalo", "cockiness", "cycle", "dwarves", "espionage", "faking", "fishhook", "flapjack", "fluffiness", "galaxy", "glowworm", "gossip", "icebox", "injury", "ivory", "jackpot", "jawbreaker", "jazz", "jelly", "jigsaw", "jockey", "jogging", "joking", "joyful", "jukebox", "keyhole", "kilobyte", "kiwifruit", "lengths", "lucky", "microwave", "nightclub", "pyjamas", "pneumonia", "puppy", "puzzling", "queue", "quizzes", "rhubarb", "scratch", "strength", "stretch", "subway", "syndrome", "transcript", "transplant", "twelfths", "unknown", "unworthy", "uptown", "vaporize", "vodka", "whiskey", "witchcraft", "youthful", "zodiac", "zombie"};

  std::vector<std::string> german = {"xylophon", "zucchini", "nichtsdestotrotz", "akquise", "schifffahrtsgesellschaft", "unsympathisch", "kilobyte", "schnaps", "syndrom", "transplantation", "wodka", "voyeurismus", "whiskey", "yacht", "zombie", "lokomotive", "kirschkern", "typ", "babypuppe", "dachpappe", "vollmond", "kopfkino", "kopfball", "kruzifix", "geschlechtsverkehr", "hauptbahnhof", "zukunftsmusik", "nippelpiercing", "zylinder", "mindesthaltbarkeitsdatum", "autowaschanlage", "typographie", "yuccapalme", "zynisch", "myom", "cytoplasma", "asymmetrisch", "chrysantheme", "geschmacksverirrung", "gratwanderung", "kernspintomografie", "puderzucker", "umweltschutzorganisationen", "hund", "tipp", "zebra", "firlefanz", "muffensausen", "kaulquappe", "baumhaus", "rotkehlchen", "pupskissen", "katzenfutter", "staubkorn", "bildschirm", "tastatur", "notarzt", "blaulicht", "festplatte", "motorschlag", "klammeraffe", "orangutan", "mozartkugel", "geschichtsschreibung", "angstschweiß", "weihnachtsschmuck"};


  std::cout << "For an english codeword please insert 'e', for a german one 'g'.\n";

  // std::cout << english.size() << "\n";
  // std::cout << german.size() << "\n";

  while (!chosen){

    std::cout << "Please choose a language: ";
    std::cin >> lang;

    if (lang == 'e'){
      chosen = true;
    }

    else if (lang == 'g'){
      chosen = true;
    }

    else{
      std::cout << "Sorry, but this isn't a language you can choose. You can choose between English 'e' and German 'g'.\n";
    }
  }

  srand(time(NULL));
  int word_idx = std::rand() % 67;

  if (lang == 'g'){
    return german[word_idx];
  }
  else{
    return english[word_idx];
  }
}

void end_game(std::string answer, std::string codeword){

  if (answer == codeword){
  std::cout << "Hooray! You saved the person and earned a medal of honor!\n";
  }
  else{
    std::cout << "Oh no! The UFO just flew away with another person!\n";
  }
  std::cout << "The codeword was: " << codeword << "\n\n";
}

void display_status(std::vector<char> incorrect, std::string answer){
  std::cout << "Incorrect Guesses:\n";

  for (int i = 0; i < incorrect.size(); i++){
    std::cout << incorrect[i] << " ";
  }

  std::cout << "\n";
  std::cout << "Codeword:\n";

  for (int i = 0; i < answer.size(); i++){
    std::cout << answer[i] << " ";
  }

  std::cout << "\n";
}

void display_misses(int misses) {

  if (misses == 0 || misses == 1) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /   0   \\      / `-----------'  \n";
    std::cout << "            /  --|--  \\    /                 \n";
    std::cout << "           /     |     \\                     \n";
    std::cout << "          /     / \\     \\                   \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 2) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  0  \\        (  Send help! ) \n";
    std::cout << "             / --|-- \\      / `-----------'  \n";
    std::cout << "            /    |    \\    /                 \n";
    std::cout << "           /    / \\    \\                    \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 4) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  |  \\        (  Send help! ) \n";
    std::cout << "             /  / \\  \\      / `-----------' \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 5) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              / / \\ \\        (  Send help! )\n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 6) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }

}
