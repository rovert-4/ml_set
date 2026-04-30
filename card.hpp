#ifndef CARD_HPP
#define CARD_HPP

// card.hpp
// inspired by eecs280 euchre project code
// 4/30/26

#include <iostream>


//Enum types to represent Card attributes.
//Each card has a color, number, shape, and shading
//Indexed by one to match Number attribute
enum Color 
{
    RED = 1,
    BLUE = 2,
    GREEN = 3,
}; 

enum Number
{
    ONE = 1,
    TWO = 2,
    THREE = 3,
};

enum Shape
{
    OVAL = 1,
    DIAMOND = 2,
    SQUIGGLE = 3,
};

enum Shading
{
    SOLID = 1,
    STRIPED = 2,
    OPEN = 3,
};


//Card class
class Card 
{
    public:

    //default ctor
    Card();

    //custom ctor
    Card(Color color, Number number, Shape shape, Shading shading);

    // //copy ctor
    // Card(const Card &other) :


    // //overload operator=
    // Card &operator=(const Card &other){};
    // //dtor
    // ~Card();

    //getters
    Color get_color() const;

    Number get_number() const;

    Shape get_shape() const;

    Shading get_shading() const;


    //comparison helper functions
    bool is_same_color(const Card &rhs, const Card &lhs);

    bool is_same_number(const Card &rhs, const Card &lhs);

    bool is_same_shape(const Card &rhs, const Card &lhs);

    bool is_same_shading(const Card &rhs, const Card &lhs);


    private:
        Color color;
        Number number;
        Shape shape;
        Shading shading;
};




#endif
