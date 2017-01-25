#include "Astre.hpp"
#include <cmath>
#include <iostream>


Astre::Astre( std::string nom, double masse, double rayon,  double x, double y ,std::string description) :nom_(nom), masse_(masse), rayon_(rayon), description_(description), position_(x,y)
{}


