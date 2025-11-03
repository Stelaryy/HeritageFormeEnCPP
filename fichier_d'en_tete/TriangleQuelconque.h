// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe TriangleQuelconque - Déclaration

#pragma once

class TriangleQuelconque {
private:
    double a, b, c; // côtés
    static int compteur;
    static int decrementer;

    // Vérifie si les longueurs forment un triangle valide
    bool estValide(double A, double B, double C) const;

    //methode d'incrementation et decrementation
    static void incrementerCompteur();
    static void decrementerCompteur();

public:
    // Constructeur avec 3 côtés
    TriangleQuelconque(double A, double B, double C);

    // Constructeur avec 2 côtés + 1 angle (en degrés)
    TriangleQuelconque(double A, double B, double angleDegres, bool fromAngle);

    //destructeur 
    ~TriangleQuelconque();

    // Méthodes
    double getPerimetre() const;
    double getSurface() const;

    //Getters
    double getA() const;
    double getB() const;
    double getC() const;

    static int getCompteurTriangle();
    
};




