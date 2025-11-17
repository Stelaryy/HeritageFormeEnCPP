// Auteur : Ahmed Boukra Bettayeb
// Version : 3.0
// Date : 16/11/2025
// Classe Carre - Declaration
#ifndef DEF_CARRE
#define DEF_CARRE

#pragma once
#include <iostream>
#include "Rectangle.h"


class Carre : public Rectangle  {
private:
    //variable
    double cote;
    static int compteurCarre;

public:
    // Constructeur
    Carre();
    Carre(double cote);
    ~Carre();
    void SaisirDimension() override;
    void SaisirDimension(double _dim1) override;
    static int getCompteurCarre();
    static void incrementerCompteur();
    static void decrementerCompteur();
    
};
#endif


