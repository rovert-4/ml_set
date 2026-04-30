#ifndef BOARD_HPP
#define BOARD_HPP

#include <array>
#include "card.hpp"


class Board
{
    public:
        //default ctor
        //Board();

        //read in board
        //Board(std::istream& board_in);

        bool is_same_card(Card a, Card b);

        bool is_valid_set(Card a, Card b, Card c);

        std::array<Card, 3> find_set();

    private:
        static const int MAX_BOARD_SIZE;
        std::array<Card, 30> board;

};

#endif