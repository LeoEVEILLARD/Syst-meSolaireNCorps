#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <iostream>
#include <map>
//#include <SDL2/SDL.h>
#include <cstdio> 
#include "System.hpp"
//#include <SDL2/SDL2_gfxPrimitives.h>


using namespace std;


class Graphic
{
    public:
    Graphic(System & system,int hauteur, int largeur, int RatioAffichage, bool test, int argc, char **argv);
    
    static void draw(System s);
    
    void circle(float x, float y, float r, int segments);
    

    private:
    
    System system_;
    
    

    double RatioAffichage_ = 1000000;


};

#endif
