#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>

class Monstre{

    private:
        std::string _nom;
        int _pv ;
        int _atk ;
        bool _dispo = true;
        bool _mort = false;
        
    public:
        int getAtk();
        int getPv();

        int setPv( int pv);
        int setMort(bool mort);
        int setDispo(bool dispo);

        void attaqueMonstre(Monstre * cible);

        void afficheMonstre();
        
        Monstre(std::string _nom, int _pv, int _atk);
};

#endif