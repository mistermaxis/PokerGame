#pragma once
#include <utility>
#include <string>
#include "HandType.hpp"

class SuitType {
private:
	std::pair<unsigned, std::string> cardSuit;
public:
	SuitType() { }
	~SuitType() { }
	SuitType(unsigned value, std::string name) { cardSuit = std::make_pair(value, name); }
	const unsigned getSuitNumber() { return cardSuit.first; }
	const std::string getSuitName() { return cardSuit.second; }
	unsigned operator+ (unsigned & i) { return cardSuit.first + i; }
};

class NumberType {
private:
	std::pair<unsigned, std::string> cardNumber;
public:
	NumberType() { }
	~NumberType() { }
	NumberType(const unsigned value, const std::string name) { cardNumber = std::make_pair(value, name); }
	const unsigned getValueNumber() { return cardNumber.first; }
	const std::string getValueName() { return cardNumber.second; }
	unsigned operator+(SuitType& s) { return cardNumber.first + s.getSuitNumber(); }
	unsigned operator*(SuitType& s) { return cardNumber.first * s.getSuitNumber(); }
};

class Card {
private:
	const unsigned int id = 0;
	NumberType number;
	SuitType suit;
public:
	Card() { }
	~Card() { }
	Card(const unsigned id, const NumberType value, const SuitType suit) : id(id), number(value), suit(suit) { }
	NumberType getNumber() const { return number; }
	SuitType getSuit() const { return suit; }
	unsigned getID() const { return id; }
};