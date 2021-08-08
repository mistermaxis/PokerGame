#include "Game.hpp"

void Game::start()
{
	std::cout << "Game Started\n";
}

void Game::dealPocketCards()
{
	for (auto& player : pokerPlayers)
	{
		pokerDealer->deal(player);
	}

	for (auto& player : pokerPlayers)
	{
		pokerDealer->deal(player);
	}
}

void Game::dealFlop()
{
	pokerDealer->deal(burnCard);
	pokerDealer->deal(table);
	pokerDealer->deal(table);
	pokerDealer->deal(table);
}

void Game::dealTurn()
{
	pokerDealer->deal(burnCard);
	pokerDealer->deal(table);
}

void Game::dealRiver()
{
	pokerDealer->deal(burnCard);
	pokerDealer->deal(table);
}

void Game::compareHands(std::vector<Hand> hands)
{

}

void Game::showPlayersHands()
{
	std::cout << "Table Cards: \n\n";
	table.PrintCards();
	
	for (auto player : pokerPlayers)
	{
		std::cout << "\n" << player.getName() << "\'s Cards:\n\n";
		player.PrintCards();
	}
}
