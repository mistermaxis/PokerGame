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
	ChipsStack chips = 0;
	virtual void Bet(unsigned amount) { chips.RemoveChips(amount); }
	virtual void Collect(unsigned amount) { chips.AddChips(amount); }
	virtual void Pay(IPayable& payee, unsigned amount) { chips.RemoveChips(amount); payee.Collect(amount); }
};