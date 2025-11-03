// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe Ellipse - Déclaration

#pragma once

class Ellipse {
private:
    static int compteur;
    static int decrementer;
    double a; // semi-grand axe
    double b; // semi-petit axe
    static void incrementerCompteur();
    static void decrementerCompteur();

public:
    // Constructeur
    Ellipse(double A, double B);
    ~Ellipse();

    // Getters
    double getA() const;
    double getB() const;

    // Méthodes
    double getSurface() const;
    double getPerimetre() const; 

    static int getCompteurellispe();
    

};




