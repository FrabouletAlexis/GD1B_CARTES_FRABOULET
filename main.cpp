#include "Monstre.cpp"
#include <iostream>
#include <string>


int main(){

    Monstre monstre1 = Monstre("LA VIE",2,5);
    Monstre monstre2 = Monstre("L'autre",8,5);
    monstre1.afficheMonstre();
    monstre2.afficheMonstre();

    monstre1.attaqueMonstre(& monstre2);

    monstre1.afficheMonstre();
    monstre2.afficheMonstre();
}