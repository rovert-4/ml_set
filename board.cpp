#include <array>
#include "board.hpp"

using namespace std;

bool Board::is_same_card(Card a, Card b)
{
    return true;
    // return(
    //     a.get_color() == b.get_color()
    //     && a.get_number() == b.get_number()
    //     && a.get_shape() == b.get_shape()
    //     && a.get_shading() == b.get_shading()
    // );
}

bool Board::is_valid_set(Card a, Card b, Card c)
{

    return
    (       //must meet all the following requirements
            ((a.get_color() == b.get_color() == c.get_color()) || (a.get_color() != b.get_color() != c.get_color())) //color requirement
        &&  ((a.get_number() == b.get_number() == c.get_number()) || (a.get_number() != b.get_number() != c.get_number())) //number requirement
        &&  ((a.get_shape() == b.get_shape() == c.get_shape()) || (a.get_shape() != b.get_shape() != c.get_shape())) //shape requirement
        &&  ((a.get_shading() == b.get_shading() == c.get_shading()) || (a.get_shading() != b.get_shading() != c.get_shading())) //shading requirement
    );
}

std::array<Card, 3> Board::find_set()
{
    for(int i = 0; i < board.size() - 2; ++i)
    {
        for(int j = i + 1; i < board.size() - 1; ++j)
        {
            for(int k = i + 2; i < board.size(); ++k)
            {
                if(is_valid_set(board[i], board[j], board[k]))
                {
                    return std::array{board[i], board[j], board[k]};
                }
            }
        }
    }
    return{board[0], board[0], board[0]}; //fix this later
}