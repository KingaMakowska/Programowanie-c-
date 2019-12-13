#pragma once
#include <string>

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;
	
	void Reset(); // TODO make a more ritch return value.
	bool CheckGuessValidity(std::string);

private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};

