//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Gustavo Isaias Chalco Apaza on 12/8/16.
//  Copyright © 2016 Gustavo Isaias Chalco Apaza. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount {
    int32 Bulls = 0;
    int32 Cows = 0;
};

class FBullCowGame {
    // Metodos publicos
public:
    FBullCowGame(); // Constructor
    void Reset(); // TODO Mejorar el valor de retorno
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    bool IsGameWon() const;
    bool CheckGuessValidity(FString) const;
    
    FBullCowCount SubmitGuess(FString);
    
    // Metodos Privados
private:
    // Iniciados en constructor
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
    
    //bool IsIsogram();

};


#endif /* FBullCowGame_hpp */
