// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe HexagoneIrregulier - Declaration

#pragma once

class HexagoneIrregulier {
private:
    static int compteur;
    static int decrementer;
    double sommets[6][2]; // 6 sommets (x,y)
    static void incrementerCompteur();
    static void decrementerCompteur();

public:
    // Constructeur : prend un tableau de 6 sommets
    HexagoneIrregulier(const double s[6][2]);
    ~HexagoneIrregulier();
    // M�thodes
    double getPerimetre() const;
    double getSurface() const;

    static int getCompteurHexagone();
    
};



