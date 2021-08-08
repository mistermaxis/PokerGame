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
		
		const Card GetCard()
		{
			srand((unsigned int)time(nullptr));
			unsigned long value_;
			unsigned long suit_;
			std::string value_string;
			std::string suit_string;
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
				value_string = "Ace";
				break;
			case 1:
				value_string = "Two";
				break;
			case 2:
				value_string = "Three";
				break;
			case 3:
				value_string = "Four";
				break;
			case 4:
				value_string = "Five";
				break;
			case 5:
				value_string = "Six";
				break;
			case 6:
				value_string = "Seven";
				break;
			case 7:
				value_string = "Eight";
				break;
			case 8:
				value_string = "Nine";
				break;
			case 9:
				value_string = "Ten";
				break;
			case 10:
				value_string = "Jack";
				break;
			case 11:
				value_string = "Queen";
				break;
			case 12:
				value_string = "King";
			default:
				break;
			}

			switch (suit_)
			{
			case 0:
				suit_string = "Clubs";
				break;
			case 1:
				suit_string = "Spades";
				break;
			case 2:
				suit_string = "Hearts";
				break;
			case 3:
				suit_string = "Diamonds";
				break;
			default:
				break;
			}

			Card card(id_, NumberType(value_, value_string), SuitType(suit_, suit_string));

			return card;
		}

};

