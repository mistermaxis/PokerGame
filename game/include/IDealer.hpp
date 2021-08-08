#pragma once
#include <iostream>
#include "Deck.hpp"

class IDealer {
	public:
	virtual void Deal(Dealable& dealable) = 0;
	virtual ~IDealer() {};
};

class PokerDealer : public IDealer {
private:
	Deck deck;
public:
	PokerDealer() { }
	~PokerDealer() { }
	
	virtual void Deal(Dealable& dealable)
	{
		dealable.Deal(deck.GetCard());
	}
};