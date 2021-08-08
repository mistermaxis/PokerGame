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
	void CompareHands(std::vector<Hand> hands);
public:
	Game() { pokerDealer = std::unique_ptr<PokerDealer>(new PokerDealer); }
	~Game() {  }

	void Start();
	void AddPlayer(std::string player_name) { pokerPlayers.emplace_back(PokerPlayer(player_name)); }
	void ShowPlayersHands();
	void DealPocketCards();
	void DealFlop();
	void DealTurn();
	void DealRiver();
};
