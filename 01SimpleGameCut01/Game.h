#pragma once

class Game {
public:
    Game();
    void play();

private:
    int secretNumber;
    int attempts;

    void generateSecretNumber();
};

