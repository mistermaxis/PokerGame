#pragma once

class IPayable {
public:
	virtual void Bet(unsigned amount) = 0;
	virtual void Collect(unsigned amount) = 0;
	virtual void Pay(IPayable& payee, unsigned amount) = 0;
};

class ChipsStack {
private:
	unsigned chipStack;
public:
	ChipsStack(unsigned starting_chips) : chipStack(starting_chips) {  }
	void AddChips(unsigned amount) { chipStack += amount; }
	void RemoveChips(unsigned amount) { chipStack -= amount; }
};

class Payable : public IPayable {
	ChipsStack Chips = 0;
	virtual void Bet(unsigned amount) { Chips.RemoveChips(amount); }
	virtual void Collect(unsigned amount) { Chips.AddChips(amount); }
	virtual void Pay(IPayable& payee, unsigned amount) { Chips.RemoveChips(amount); payee.Collect(amount); }
};