#include "card.hpp"

using namespace std;

Card::Card()
{
    color = RED;
    number = ONE;
    shape = OVAL;
    shading = SOLID;
}

Card::Card(Color c, Number n, Shape sp, Shading sd)
{
    color = c;
    number = n;
    shape = sp;
    shading = sd;
}



Color Card::get_color() const
{
    return color;
}
Number Card::get_number() const
{
    return number;
}
Shape Card::get_shape() const
{
    return shape;
}
Shading Card::get_shading() const
{
    return shading;
}


bool Card::is_same_color(const Card &rhs, const Card &lhs)
{
    return(rhs.color == lhs.color);
}

bool Card::is_same_number(const Card &rhs, const Card &lhs)
{
    return(rhs.number == lhs.number);
}

bool Card::is_same_shape(const Card &rhs, const Card &lhs)
{
    return(rhs.shape == lhs.shape);
}

bool Card::is_same_shading(const Card &rhs, const Card &lhs)
{
    return(rhs.shading == lhs.shading);
}

