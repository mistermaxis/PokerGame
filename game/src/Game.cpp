#include "Game.hpp"

void Game::Start()
{
	std::cout << "Game Started\n";
}

void Game::DealPocketCards()
{
	for (auto& player : pokerPlayers)
	{
		pokerDealer->Deal(player);
	}

	for (auto& player : pokerPlayers)
	{
		pokerDealer->Deal(player);
	}
}

void Game::DealFlop()
{
	pokerDealer->Deal(burnCard);
	pokerDealer->Deal(table);
	pokerDealer->Deal(table);
	pokerDealer->Deal(table);
}

void Game::DealTurn()
{
	pokerDealer->Deal(burnCard);
	pokerDealer->Deal(table);
}

void Game::DealRiver()
{
	pokerDealer->Deal(burnCard);
	pokerDealer->Deal(table);
}

void Game::CompareHands(std::vector<Hand> hands)
{

}

void Game::ShowPlayersHands()
{
	std::cout << "Table Cards: \n\n";
	table.PrintCards();
	
	for (auto player : pokerPlayers)
	{
		std::cout << "\n" << player.GetName() << "\'s Cards:\n\n";
		player.PrintCards();
	}
}
