#pragma once


#include "GameEngine.h"

class ConsoleUI {
public:
    ConsoleUI();
    void run();

private:
    GameEngine game;

    int getPlayerGuess();
    void printTooLowMessage();
    void printTooHighMessage();
    void printSuccessMessage();
};


