// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe Carre - D�claration
#pragma once


class Carre {
private:
    //variable
    static int compteur;
    static int decrementer;
    double cote;
    //compteur
    static void incrementerCompteur();
    static void decrementerCompteur();

public:
    // Constructeur
    Carre(double cote);
    ~Carre();

    // M�thodes
    double perimetre() const;
    double surface() const;
    void setCote();  
    double getCote() const;

    //compteur
    static int getCompteurcarre();
    
};



