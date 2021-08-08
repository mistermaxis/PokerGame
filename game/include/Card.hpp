#pragma once
#include <utility>
#include <string>
#include "HandType.hpp"

class SuitType {
private:
	std::pair<unsigned, std::string> CardSuit;
public:
	SuitType() { }
	~SuitType() { }
	SuitType(unsigned value, std::string name) { CardSuit = std::make_pair(value, name); }
	const unsigned getSuitNumber() { return CardSuit.first; }
	const std::string getSuitName() { return CardSuit.second; }
	unsigned operator+ (unsigned & i) { return CardSuit.first + i; }
};

class NumberType {
private:
	std::pair<unsigned, std::string> CardNumber;
public:
	NumberType() { }
	~NumberType() { }
	NumberType(const unsigned value, const std::string name) { CardNumber = std::make_pair(value, name); }
	const unsigned getValueNumber() { return CardNumber.first; }
	const std::string getValueName() { return CardNumber.second; }
	unsigned operator+(SuitType& s) { return CardNumber.first + s.getSuitNumber(); }
	unsigned operator*(SuitType& s) { return CardNumber.first * s.getSuitNumber(); }
};

class Card {
private:
	const unsigned int cardID = 0;
	NumberType Number;
	SuitType Suit;
public:
	Card() { }
	~Card() { }
	Card(const unsigned id, const NumberType value, const SuitType suit) : cardID(id), Number(value), Suit(suit) { }
	NumberType GetNumber() { return Number; }
	SuitType GetSuit() { return Suit; }
	unsigned GetID() { return cardID; }
};