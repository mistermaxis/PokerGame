#include "Game.hpp"

int main()
{	
	Game pokerGame;

	pokerGame.addPlayer("John");
	pokerGame.addPlayer("George");
	pokerGame.addPlayer("Julio");
	
	pokerGame.dealPocketCards();

	//TODO Take Bets
	
	pokerGame.dealFlop();

	//TODO Take Bets

	pokerGame.dealTurn();
	
	//TODO Take Bets

	pokerGame.dealRiver();

	//TODO Take Bets

	pokerGame.showPlayersHands();

	return 0;
}