#ifndef MAGE_H
#define MAGE_H

#include <string>
#include "Monstre.h"

class Mage{

    private:
        std::string _nomMage;
        int _pvMage ;
        bool _mort = false;
        std::string _nomMonstre[4];
        int _pvMonstre[4];
        int _atkMonstre[4];
        
    public:
        int getPvMage();

        int setPvMage( int pv);
        int setMortMage(bool mort);

        void attaqueMonstre(Monstre*cible);
        void attaqueJoueur(Monstre*cible);

        void afficheZone();
        void invoqueMonstre();

        Mage(std::string _nom, int _pv);
};

#endif