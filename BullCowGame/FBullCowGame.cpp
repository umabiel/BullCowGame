//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Gustavo Isaias Chalco Apaza on 12/8/16.
//  Copyright © 2016 Gustavo Isaias Chalco Apaza. All rights reserved.
//

#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame() {
    Reset();
}

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
bool FBullCowGame::IsGameWon() const {
    return false;
}

void FBullCowGame::Reset(){
    __cpp_constexpr; int32 MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;
    
    __cpp_constexpr; FString HIDDEN_WORD = "ant";
    MyHiddenWord = HIDDEN_WORD;
    
    MyCurrentTry = 1;
    
    return;
}

int32 FBullCowGame::GetHiddenWordLength() const {
    return MyHiddenWord.length();
}

bool FBullCowGame::CheckGuessValidity(FString) const {
    return false;
}

// Recibe una palabra  valida
FBullCowCount FBullCowGame::SubmitGuess(FString Guess) {
    // Incrementa el numero de Turno
    MyCurrentTry++;
    // Inicia y regresa la variable
    FBullCowCount BullCowCount;
    // loop atravez de las letras en la palabra
    int32 HiddenWordLength = MyHiddenWord.length();
    for (int32 i = 0; i < HiddenWordLength ; i++) {
        for (int32 j = 0; j < HiddenWordLength; j++) {
            if (Guess[j] == MyHiddenWord[i]) {
                if (i == j) {
                    BullCowCount.Bulls++;
                } else {
                    BullCowCount.Cows++;
                }
            }
        }
    }
    return BullCowCount;
}
