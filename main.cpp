#include <iostream>
#include "board.hpp"



#include <cassert>
using namespace std;


bool check_set(Card a, Card b, Card c)
{

    return
    (       //must meet all the following requirements
            
        ((a.get_color() == b.get_color() == c.get_color()) ||
              ((a.get_color() != b.get_color() 
          && (b.get_color() != c.get_color())
          && (a.get_color() != c.get_color())))) //color requirement

          &&

        ((a.get_number() == b.get_number() == c.get_number()) || 
              ((a.get_number() != b.get_number() 
          && (b.get_number() != c.get_number())
          && (a.get_number() != c.get_number())))) //number requirement

          &&

        ((a.get_shape() == b.get_shape() == c.get_shape()) || 
              (a.get_shape() != b.get_shape() 
          && (b.get_shape() != c.get_shape())
          && (a.get_shape() != c.get_shape()))) //shape requirement

          &&

        ((a.get_shading() == b.get_shading() == c.get_shading()) || 
          //     (((a.get_shading() != b.get_shading()) 
          // && (b.get_shading() != c.get_shading())
          // && (a.get_shading() != c.get_shading())))) //shading requirement
    );
}

int main() 
{
  Card card_a = Card(RED, THREE, OVAL, OPEN);
  Card card_b = Card(RED, TWO, OVAL, OPEN);
  Card card_c = Card(RED, ONE, OVAL, OPEN);

  assert(check_set(card_a, card_b, card_c));

  cout << "success!\n";

}