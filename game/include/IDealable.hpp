#pragma once
#include "Card.hpp"
#include <vector>
#include <iostream>

class IDealable {
public:
	virtual void deal(const Card) = 0;
};

class Dealable : public IDealable {
private:
	std::vector<Card> cards;
protected:
	Dealable() {}
public:
	virtual void deal(const Card card) { cards.push_back(card); }
	
	void PrintCards() {
		for (auto card : cards) {
			std::cout << card.getNumber().getValueName() << " of " << card.getSuit().getSuitName() << "\n";
		}
	}
	std::vector<Card> showCards() const { return cards; }
};

class BurnCard : public Dealable {

};