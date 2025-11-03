// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe Cercle - Déclaration
#include "stdafx.h"
#pragma once

class Cercle {
private:
    static int compteur;
    static int decrementer;
    double rayon;
    static void incrementerCompteur();
    static void decrementerCompteur();
    

public:
    // Constructeur
    Cercle(double r);
    ~Cercle();

    // Getter
    double getRayon() const;

    // Méthodes
    double getSurface() const;
    double getPerimetre() const;

    //compteur
    static int getCompteurCercle();
};



