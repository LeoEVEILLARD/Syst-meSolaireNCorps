
#include <stdio.h>
#include "Astre.hpp"
#include "System.hpp"

using namespace std;

int main() {

    printf("\nHello world!!\nThis is the best Solar System Simulator ever made !!\n\n");
    
    Astre Soleil = Astre::Astre("Soleil",  1.9891e30, 1392684000 , 0, 0, "Je pese un max mon gars (99,9% de la masse du SS)");
    
    cout << "test affichage soleil, " << endl <<  Soleil << endl << endl;
    
        Astre Terre = Astre::Astre("Terre",  5.9736e24, 2*6356 , 149597887000, 0, "je suis le seul astre du systeme solaire où l'on peut boire des gin fizz, le choix est vite fait non ?");
    
    cout << "test terre : " << Terre << endl << endl;
    
    
    
    System systemeSolaire("Systeme solaire", {Soleil, Terre});
    cout << "test affichage SS " << endl << systemeSolaire << endl;
   
    
    //System unAutreSysteme("Systeme vide");
    //cout << unAutreSysteme << endl;
    
    return 0;

}
