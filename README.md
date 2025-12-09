Project Name
Word Guess Game – Console Edition

Description
A simple command‑line word‑guessing game written in C++17.
The program selects a random English word from a dictionary file, displays it as a series of underscores, and lets the player guess letters. The player has 10 attempts to reveal the whole word. Correct letters are shown in their positions, while wrong guesses reduce the remaining attempts. The game ends with a win (the word is guessed) or a loss (the attempts are exhausted).

Installation

1. Clone the repository
   git clone https://github.com/Oyenga-12/Library-management.git
   cd word-guess
   

2. Build with CMake
   mkdir build && cd build
   cmake ..
   cmake --build .
   

Or compile directly with a C++17 compiler:
   g++ -std=c++17 -Wall -Wextra -O2 src/main.cpp -o word-guess
   

3. Place the dictionary file words_alpha.txt (one word per line) in the same directory as the executable.

Usage

Run the program from a terminal:
./word-guess

The game will display the hidden word and the number of remaining attempts. Type a single letter and press Enter. The program will inform you whether the guess is correct and update the display. The game finishes when the word is fully revealed or when the 10 attempts are used up.

Example
A random English word has been chosen.
You have 10 attempts to guess the letters.

Word: _ _ _ _ _
Attempts left: 10
Enter a letter: e
Correct!

Word: _ e _ _ _
Attempts left: 10
Enter a letter: a
Wrong guess!
...

Project Structure
word-guess/
│
├─ src/
│   └─ main.cpp          # Main source file
│
├─ words_alpha.txt       # Dictionary file (one word per line)
│
├─ CMakeLists.txt        # CMake configuration
└─ README.md

License
The project is released under the MIT License. See the LICENSE file for details.

Author
ADJAMBO Espoir Oyenga – Computer Science student,
Polytechnic State University of Nizhny Novgorod, Russia
GitHub: https://github.com/Oyenga-12
Feel free to open an issue or submit a pull request if you have suggestions or improvements.
