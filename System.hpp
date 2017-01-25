#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include "Astre.hpp"
#include <vector>

using namespace std;


class System
{
public:
    //constructeurs
    System(std::string name, vector<Astre> vecAstre = {});
    inline void addAstre(Astre& astre) {vecAstre_.push_back(astre);};
  
private:
    
    
protected:

    std::string name_;
    vector<Astre> vecAstre_;
    
    inline friend ostream& operator<<(ostream& out, const System& system) // output
    {
        out << "Je suis un systeme nommé " << system.name_  << " et je contiens " << system.vecAstre_.size() << " astre";
        if(system.vecAstre_.size() > 1) out << "s.";
        else                     out << ".";
        
        return out;
    }
    
    
};


#endif
