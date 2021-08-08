#pragma once
#include <ctime>
#include <vector>
#include "Card.hpp"
#include "IDealable.hpp"

constexpr size_t SUITS = 4;
constexpr size_t VALUES = 13;
constexpr size_t DECK_SIZE = 52;

class Deck
{	
	private:
		std::vector<bool> deck;
	public:
		Deck() { deck.assign( DECK_SIZE, false); }
		~Deck() { }
		
		const Card getCard()
		{
			srand((unsigned int)time(nullptr));
			unsigned long value_;
			unsigned long suit_;
			std::string valueString;
			std::string suitString;
			unsigned long id_;

			do
			{
				value_ = rand() % VALUES;
				suit_ = rand() % SUITS;
				id_ = suit_ * VALUES + value_;
			}while (deck[id_] == true);

			deck[id_] = true;

			switch (value_)
			{
			case 0:
				valueString = "Ace";
				break;
			case 1:
				valueString = "Two";
				break;
			case 2:
				valueString = "Three";
				break;
			case 3:
				valueString = "Four";
				break;
			case 4:
				valueString = "Five";
				break;
			case 5:
				valueString = "Six";
				break;
			case 6:
				valueString = "Seven";
				break;
			case 7:
				valueString = "Eight";
				break;
			case 8:
				valueString = "Nine";
				break;
			case 9:
				valueString = "Ten";
				break;
			case 10:
				valueString = "Jack";
				break;
			case 11:
				valueString = "Queen";
				break;
			case 12:
				valueString = "King";
			default:
				break;
			}

			switch (suit_)
			{
			case 0:
				suitString = "Clubs";
				break;
			case 1:
				suitString = "Spades";
				break;
			case 2:
				suitString = "Hearts";
				break;
			case 3:
				suitString = "Diamonds";
				break;
			default:
				break;
			}

			Card card(id_, NumberType(value_, valueString), SuitType(suit_, suitString));

			return card;
		}

};

