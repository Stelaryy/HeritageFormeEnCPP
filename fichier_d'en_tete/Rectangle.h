// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe Rectangle - Declaration

#ifndef DEF_RECTANGLE
#define DEF_RECTANGLE

#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
private:
    static int compteur;
    static int decrementer;
    double Longueur;
    double Largeur;
    double surface, Perimetre;

    void SaisirLongueur();
    void SaisirLargeur();

protected:
    void setLongueur(double long);
    void setLargeur(double large);
    void CalculerSurface();
    void CalculerPerimetre();


public:
    Rectangle(double Long, double Large);
    ~Rectangle();

    void setLargeur();
    double getLargeur() const;

    void setLongueur();
    double getLongueur() const;

    double calculPerimetre() const;
    double calculSurface() const;

    static int getCompteurRectangle();
    static void incrementerCompteur();
    static void decrementerCompteur();

};

#endif