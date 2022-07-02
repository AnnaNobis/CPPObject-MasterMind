#include "MasterMind.hpp"
#include <iostream>

std::string Game::secretCombination()
{
    std::string secretCombination = { BLUE, GREEN, YELLOW, RED };
    return std::string();
}

Game::Game()
{

}

bool Board::checkIfCorrect()
{
    if (ColoursGuess == game.secretCombination())
    return true;
    else
    {
        board->ColoursResult(a, b, c, d);
    }
}



Player::Player()
{
}



bool Player::makeTurn(Board* board)
{
	std::cout << "Place your combination: " << std::endl;
	int a = 0, b = 0, c = 0, d = 0;
	do
	{
		std::cin >> a;
		std::cin >> b;
		std::cin >> c;
		std::cin >> d;
	} while (board->check(a, b, c,d) != ColoursGuess::EMPTY);
	board->set(colour, a,b,c,d);

	return true;
}

  


std::ostream& operator << (std::ostream& s, const Board& board)
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {

            s << board.check(i, j);
            s << " ";
        }
        s << std::endl;
    }
    return s;

}


