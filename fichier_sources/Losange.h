// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe Losange - Declaration

#pragma once

class Losange {
private:
    static int compteur;
    static int decrementer;
    double d1;
    double d2;
    double cote;
    double angle; // en radians
    static void incrementerCompteur();
    static void decrementerCompteur();
    

public:
    // Constructeurs
    Losange(bool fromDiagonales); // saisie par diagonales
    Losange();                    // saisie par c�t� + angle
    ~Losange();

    // M�thodes
    double perimetre() const;
    double surfaceParDiagonales() const;
    double surfaceParCoteEtAngle() const;

    // Getters
    double getCote() const;
    double getD1() const;
    double getD2() const;
    double getAngleDeg() const;

    static int getCompteur();
    
};



