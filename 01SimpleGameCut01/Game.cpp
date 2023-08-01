#include "Game.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

Game::Game() : secretNumber(0), attempts(0) {
    // Seed the random number generator
    std::srand(static_cast<unsigned>(std::time(0)));
}

void Game::generateSecretNumber() {
    secretNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
}

void Game::play() {
    generateSecretNumber();
    attempts = 0;
    int guess;

    std::cout << "Welcome to Guess the Number game!\n";
    std::cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
            break;
        }
        else if (guess < secretNumber) {
            std::cout << "Too low. Try again.\n";
        }
        else {
            std::cout << "Too high. Try again.\n";
        }
    }
}
