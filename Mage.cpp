#ifndef MAGE_CPP
#define MAGE_CPP

//#include "Monstre.cpp"
#include "Mage.h"
#include <iostream>
#include <string>

    Monstre monstre1 = Monstre("teste",2,3);

    int Mage::getPvMage(){
        return _pvMage;
    }

    int Mage::setPvMage( int pv){
        _pvMage = pv;
    }

    int Mage::setMortMage ( bool mort){
        _mort = mort;
    }

    /*void Mage::attaqueJoueur(Monstre*cible){
        monstre1.attaqueMonstre(Monstre * cible);

    }*/

    void Mage::afficheZone(){
        for(int i=0;i<4;i++){
            if (_nomMonstre [ i ] != " " ) {
                std::cout << "---------" << std::endl;
                std::cout << _nomMonstre [ i ] << std::endl ;
                std::cout << "PV " << _pvMonstre [ i ] << std::endl;
                std::cout << "ATK " << _atkMonstre [ i ] << std::endl;
            }
        } 
        
    };
    void Mage::invoqueMonstre(){

        std::string nomMonstre;
        std::cout << " Nom du monstre: " ;
        std::cin >> nomMonstre;

        int pvMonstre;
        std::cout << " PV du monstre " ;
        std::cin >> pvMonstre;
        
        int atkMonstre;
        std::cout << " ATK du monstre: " ;
        std::cin >> atkMonstre;
        for(int i=0;i<4;i++){
            if (_nomMonstre [ i ] == " " ) {
                _nomMonstre [ i ] = nomMonstre;
                _pvMonstre [ i ] = pvMonstre;
                _atkMonstre [ i ] = atkMonstre;
                return;
            }
            else{
                std::cout << " Il y a trop de monstres sur le terrain " << std::endl;
            }
        }
    }
    /*void Mage::attaqueMonstre(Monstre * cible){

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
    }*/    

    Mage::Mage(std::string _nom, int _pv): _nomMage(_nom), _pvMage(_pv), _mort ( false ){}

#endif