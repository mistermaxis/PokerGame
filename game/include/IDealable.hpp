#pragma once
#include "Card.hpp"
#include <vector>
#include <iostream>

class IDealable {
public:
	virtual void Deal(const Card) = 0;
};

class Dealable : public IDealable {
private:
	std::vector<Card> Cards;
protected:
	Dealable() {}
public:
	virtual void Deal(const Card card) { Cards.push_back(card); }
	
	void PrintCards() {
		for (auto card : Cards) {
			std::cout << card.GetNumber().getValueName() << " of " << card.GetSuit().getSuitName() << "\n";
		}
	}
	std::vector<Card> ShowCards() const { return Cards; }
};

class BurnCard : public Dealable {

};