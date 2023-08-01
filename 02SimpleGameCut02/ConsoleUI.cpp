#include "ConsoleUI.h"
#include <iostream>

ConsoleUI::ConsoleUI() {}

void ConsoleUI::run() {
    std::cout << "Welcome to Guess the Number game!\n";
    std::cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    game.play();

    int guess;
    while (true) {
        guess = getPlayerGuess();

        if (game.isGuessCorrect(guess)) {
            printSuccessMessage();
            break;
        }
        else if (guess < game.getSecretNumber()) {
            printTooLowMessage();
        }
        else {
            printTooHighMessage();
        }
    }
}

int ConsoleUI::getPlayerGuess() {
    int guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    return guess;
}

void ConsoleUI::printTooLowMessage() {
    std::cout << "Too low. Try again.\n";
}

void ConsoleUI::printTooHighMessage() {
    std::cout << "Too high. Try again.\n";
}

void ConsoleUI::printSuccessMessage() {
    std::cout << "Congratulations! You guessed the correct number in " << game.getAttempts() << " attempts.\n";
}
