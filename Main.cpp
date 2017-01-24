
#include <stdio.h>
#include "Astre.hpp"

using namespace std;

int main() {

    printf("hello world!!\n");
    
    Astre Soleil = Astre::Astre("Soleil", 1, 0, 0, "Je pese un max mon gars (99,9% de la masse du SS)");
    
    cout << "test, " <<  Soleil << endl;
    
    
    return 0;

}
