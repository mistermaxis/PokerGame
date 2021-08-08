#pragma once
#include "Table.hpp"
#include "IDealer.hpp"
#include "IDealable.hpp"
#include <vector>
#include <memory>

class Game {
private:
	std::unique_ptr<IDealer> pokerDealer;
	Table table;
	BurnCard burnCard;
	std::vector<IPlayer> pokerPlayers;
	/*void DealPocketCards();
	void DealFlop();
	void DealTurn();
	void DealRiver();*/
	void compareHands(std::vector<Hand> hands);
public:
	Game() { pokerDealer = std::make_unique<PokerDealer>(); }
	~Game() {  }

	void start();
	void addPlayer(std::string player_name) { pokerPlayers.emplace_back(PokerPlayer(player_name)); }
	void showPlayersHands();
	void dealPocketCards();
	void dealFlop();
	void dealTurn();
	void dealRiver();
};
