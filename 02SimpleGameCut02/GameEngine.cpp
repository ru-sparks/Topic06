#include "GameEngine.h"
#include <cstdlib>
#include <ctime>

GameEngine::GameEngine() : secretNumber(0), attempts(0) {
    // Seed the random number generator
    std::srand(static_cast<unsigned>(std::time(0)));
}

void GameEngine::generateSecretNumber() {
    secretNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
}

int GameEngine::getSecretNumber()
{
    return this->secretNumber;
}

int GameEngine::getAttempts() {
    return attempts;
}

bool GameEngine::isGuessCorrect(int guess) {
    attempts++;
    return guess == secretNumber;
}

void GameEngine::play() {
    generateSecretNumber();
}
