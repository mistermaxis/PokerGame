#pragma once
#include "IDealable.hpp"
#include "IPayable.hpp"
#include "Player.hpp"

class Table : public Dealable, public Payable {
	//std::vector<Card> Hand;
public:
	Table() {}
	~Table() {}
};
