#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
using namespace std;

int main() {
    vector<string> words;
    string word;


    string filename = "words_alpha.txt";
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Could not open dictionary file: " << filename << endl;
        return 1;
    }

    while (file >> word) {
        words.push_back(word);
    }
    file.close();

    if (words.empty()) {
        cout << "Dictionary is empty!" << endl;
        return 1;
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, words.size() - 1);

   
    string random_word = words[dist(gen)];
  


    int attempts = 10;  
    char guess;
    bool found;

    cout << "\n A random English word has been selected.\n";
    cout << "You have " << attempts << " attempts to guess the letters.\n";

    string hidden(random_word.length(), '_');

    while (attempts > 0 && hidden != random_word) {
        cout << "\nWord: " << hidden << endl;
        cout << "Attempts left: " << attempts << endl;
        cout << "Enter a letter: ";
        cin >> guess;

        guess = tolower(guess);
        found = false;

        // Checking if letter exists
        for (int i = 0; i < random_word.size(); i++) {
            if (random_word[i] == guess && hidden[i] == '_') {
                hidden[i] = guess;
                found = true;
            }
        }

        if (found) {
            cout << " Correct!\n";
        }
        else {
            attempts--;
            cout << " Wrong guess!\n";
        }
    }

   
    if (hidden == random_word) {
        cout << "\n Congratulations! You guessed the word: " << random_word << endl;
    }
    else {
        cout << "\n You lost! The correct word was: " << random_word << endl;
    }

    return 0;
}