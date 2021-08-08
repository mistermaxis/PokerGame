#include "Game.hpp"

int main()
{	
	Game pokerGame;

	pokerGame.AddPlayer("John");
	pokerGame.AddPlayer("George");
	pokerGame.AddPlayer("Julio");
	
	pokerGame.DealPocketCards();

	//TODO Take Bets
	
	pokerGame.DealFlop();

	//TODO Take Bets

	pokerGame.DealTurn();
	
	//TODO Take Bets

	pokerGame.DealRiver();

	//TODO Take Bets

	pokerGame.ShowPlayersHands();

	return 0;
}