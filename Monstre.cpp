#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <iostream>
#include <string>

    int Monstre::getAtk(){
        return _atk;
    }
    int Monstre::getPv(){
        return _pv;
    }

    int Monstre::setPv( int pv){
        _pv = pv;
    }

    int Monstre::setDispo ( bool dispo){
        _dispo = dispo;
    }

    int Monstre::setMort ( bool mort){
        _mort = mort;
    }

    void Monstre::attaqueMonstre(Monstre * cible){

        std::cout << "---------" << std::endl;
        std::cout << _nom << " ATTAQUE " << std::endl;
        std::cout << "---------" << std::endl;
        _pv = std::max(0,_pv - cible->getAtk());
        cible->setPv(std::max(0,cible->getPv() - _atk));
        _dispo = false;
        cible->setDispo(false);
        if (_pv == 0){
            _mort = true;
            std::cout << _nom << " a succombé "<< std::endl;
            std::cout << "---------" << std::endl;}
        if (cible->getPv() == 0){
            cible->setMort(true);
            std::cout << "---------" << std::endl;}
    }

    void Monstre::afficheMonstre(){
        if (_mort == false){
            std::cout << "---------" << std::endl;
            std::cout << _nom << std::endl;
            std::cout << "PV " << _pv << std::endl;
            std::cout << "ATK " << _pv << std::endl;
            if (_dispo == true) {
                std::cout << "Disponible" << std::endl;
                std::cout << "---------" << std::endl;
            }
            else {
                std::cout << "Indisponible" << std::endl;
                std::cout << "---------" << std::endl;
            }
        }
    }

    

    Monstre::Monstre(std::string _nom, int _pv, int _atk): _nom(_nom), _pv(_pv), _atk(_atk), _dispo ( true ), _mort ( false ){}

#endif