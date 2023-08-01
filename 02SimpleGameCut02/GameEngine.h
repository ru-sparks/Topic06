#pragma once

class GameEngine {
public:
    GameEngine();
    void play();

    int getSecretNumber();
    int getAttempts();
    bool isGuessCorrect(int guess);
private:
    int secretNumber;
    int attempts;

    void generateSecretNumber();

};


