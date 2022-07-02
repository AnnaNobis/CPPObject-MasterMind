#pragma once
#include <string>

enum ColoursGuess{EMPTY, BLUE, GREEN, YELLOW, RED };
enum ColoursResult {BLACK, GREY, WHITE};

class Game
{
std::string secretCombination();
	Board board;
	

public:
	Game();
	void start();
		void reset();
};

class Board
{
	ColoursGuess table[4];
	ColoursResult table[4];
	bool checkIfCorrect();

public:
	ColoursGuess check(int a, int b, int c, int d) const;
	void set(ColoursGuess cs, int a, int b, int c, int d);
	bool isOver();

};

class Player 
{
	ColoursGuess colour;
public:
	Player();
	bool makeTurn(Board* board);


};


