#pragma once
#include "IDealable.hpp"

class IPlayer : public Dealable, public Payable {
	//std::vector<Card> Hand;
protected:
	std::string name;
public:
	const std::string& getName() const { return name; }
};

class PokerPlayer : public IPlayer {
public:
	PokerPlayer(std::string name_) { name = name_; }
	~PokerPlayer() { }
};
