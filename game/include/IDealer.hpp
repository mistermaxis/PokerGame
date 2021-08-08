#pragma once
#include <iostream>
#include "Deck.hpp"

class IDealer {
	public:
	virtual void deal(Dealable& dealable) = 0;
	virtual ~IDealer() {};
};

class PokerDealer : public IDealer {
private:
	Deck deck;
public:
	PokerDealer() { }
	~PokerDealer() { }
	
	virtual void deal(Dealable& dealable)
	{
		dealable.deal(deck.getCard());
	}
};