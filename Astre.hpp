#ifndef ASTRE_H
#define ASTRE_H

#include <iostream>

using namespace std;


class Astre
{
public:
    //constructeurs
    Astre( std::string nom, double masse, double x = 0, double y = 0, std::string description = "");

    inline void deplacement(double x, double y) {x_+=x; y_+=y; };

private:
    
    
protected:
    double masse_;
    double x_, y_;
    std::string nom_;
    std::string description_;

    
    
    
    
    inline friend ostream& operator<<(ostream& out, const Astre& astre) // output
    {
        out << "Hello, on me nomme " << astre.nom_ << ", " << " je pese " << astre.masse_ << " kg et je me trouve actuellement a la position (" << astre.x_ << ", " << astre.y_ << ").";
        return out;
    }
    
    
};


#endif
