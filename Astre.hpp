#ifndef ASTRE_H
#define ASTRE_H

#include <iostream>
#include <Eigen/Core>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

class Astre
{

public:
    //constructeurs
    Astre( std::string nom, double masse, double rayon,  double x = 0, double y = 0, std::string description = "");

    inline void deplacement(double x, double y) {position_ += Vector2d(x,y); };

private:
    
    
protected:
    
    double masse_;
    double rayon_;
    std::string nom_;
    std::string description_;
    Vector2d position_;
    
    inline friend ostream& operator<<(ostream& out, const Astre& astre) // output
    {
        out << "Hello, on me nomme " << astre.nom_ << ", " << " je pese " << astre.masse_ << " kg, j'ai un rayon de " << astre.rayon_/1000 << " km et je me trouve actuellement a la position (" << astre.position_.format(IOFormat(StreamPrecision, DontAlignCols, ", ", ", ", "", "", " << ", ";")) << ")";
        if (!astre.description_.empty()) out << " et pour information " << astre.description_;
        else out << ".";
        
        //out << "test position eigen :" << endl << astre.position_;
        return out;
    }
    
    
};


#endif
