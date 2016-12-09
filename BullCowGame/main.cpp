//
//  main.cpp
//  BullCowGame
//
//  Created by Gustavo Isaias Chalco Apaza on 12/4/16.
//  Copyright © 2016 Gustavo Isaias Chalco Apaza. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

using FText = std::string;
using int32 = int;

// Prototipos de funciones
void PrintIntro();
FText GetGuess();
void PlayGame();
bool AskToPlayAgain();

FBullCowGame BCGame;

// Entry Point del Juego
int main(int argc, const char * argv[]) {
    
    PrintIntro();
    do {
        PlayGame();
    } while (AskToPlayAgain());
    
    return 0; // sale de la aplicacion
}

// Implementacion de Prototipos
bool AskToPlayAgain() {
    std::cout << "Desea seguir jugando (s/n)? ";
    FText response = "";
    getline(std::cin, response);
    std::cout << std::endl;
    
    return (response[0] == 'S' || response[0] == 's');
}

void PlayGame() {
    BCGame.Reset();
    int32 MaxTries = BCGame.GetMaxTries();
    
    // loop el numero de veces que preguntara
    // TODO cambiar for por while
    for (int32 count = 1 ; count <= MaxTries; count++) {
        FText Guess = GetGuess(); // TODO make loop check valid guessing
        FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
        std::cout << "Bulls = " << BullCowCount.Bulls << std::endl;
        std::cout << "Cows = " << BullCowCount.Cows << std::endl;
    }
    
    // TODO hacer resumen
    
    return;
}

void PrintIntro(){
    __cpp_constexpr; int32 WORD_LENGTH = BCGame.GetHiddenWordLength();
    std::cout << "Bienvenidos a Toros y Vacas, una juego de palabras.\n";
    std::cout << "Podras adivinar la palabra de " << WORD_LENGTH <<" letras en el Isograma que estoy pensando?" << std::endl;
    return;
}

FText GetGuess(){
    int32 CurrentTry = BCGame.GetCurrentTry();
    std::cout << CurrentTry << " Ingrese su palabra: ";
    FText Guess = "";
    
    getline(std::cin, Guess);
    return Guess;
}
