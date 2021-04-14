#ifndef MAGE_H
#define MAGE_H

#include <string>
#include "Monstre.h"

class Mage{

    private:
        std::string _nomMage;
        int _pvMage ;
        bool _mort = false;
        int _zone[4];
        
    public:
        int getPvMage();

        int setPvMage( int pv);
        int setMortMage(bool mort);

        void attaqueMonstre(Monstre*cible);
        void attaqueJoueur(Mage*cible);
        
        void afficheZone();
        void invoqueMonstre();

        Mage(std::string _nom, int _pv);
};

#endif