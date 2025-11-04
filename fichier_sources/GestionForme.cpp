// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// TP Programmation Objet BTS SN
// Gestion des différentes formes en C++

#include "stdafx.h"
#include <iostream>
#include <stdexcept>

// ==== Déclarations des classes externes ====
#include "GestionForme.h"
#include "Carre.h"
#include "Losange.h"
#include "Cercle.h"
#include "Ellipse.h"
#include "TriangleQuelconque.h"
#include "HexagoneIrregulier.h"
#include "Rectangle.h"

using namespace std;

// ==== Variables globales ====
Rectangle* MonRectangle = nullptr;
Carre* MonCarre = nullptr;
Losange* MonLosange = nullptr;
Cercle* MonCercle = nullptr;
Ellipse* MonEllipse = nullptr;
TriangleQuelconque* MonTriangleQuelconque = nullptr;
HexagoneIrregulier* MonHexagoneIrregulier = nullptr;

// ==== declaration des differente methode ====
void FaireUnRectangle();
void FaireUnCarre();
void FaireUnLosange();
void FaireUnCercle();
void FaireUnEllipse();
void FaireUnTriangleQuelconque();
void FaireUnHexagoneIrregulier();

// ==== Implementation du menu generale ====
GestionForme::GestionForme(){
    int choix;
    do {
        cout << "\n================ MENU FORME ================" << endl;
        cout << "1 - Faire un Rectangle " << endl;
        cout << "2 - Faire un Carre" << endl;
        cout << "3 - Faire un Losange" << endl;
        cout << "4 - Faire un Cercle" << endl;
        cout << "5 - Faire une Ellipse" << endl;
        cout << "6 - Faire un Triangle quelconque" << endl;
        cout << "7 - Faire un Hexagone irregulier" << endl;
        cout << "8 - Quitter le menu" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1:
            FaireUnRectangle();
            break;
        case 2: 
            FaireUnCarre();
            break;
        case 3: 
            FaireUnLosange(); 
            break;
        case 4: 
            FaireUnCercle(); 
            break;
        case 5: 
            FaireUnEllipse(); 
            break;
        case 6: 
            FaireUnTriangleQuelconque(); 
            break;
        case 7: 
            FaireUnHexagoneIrregulier(); 
            break;     
        case 8: cout << "A bientot dans la Fabrique a Forme de Ahmed !!!" << endl; break;
        default: cout << "Choix invalide !" << endl;
        }
    } while (choix != 8);



}

// ==== Implémentation des menus ====

// ==== Menu Rectangle ====
void FaireUnRectangle() {
    int choix;
    do {
        cout << "\n================ MENU Rectangle ================" << endl;
        cout << "1 - Definir la Longueur et la Largeur " << endl;
        cout << "2 - Calculer le perimetre" << endl;
        cout << "3 - Calculer la surface " << endl;
        cout << "4 - Afficher la dimension de la Longueur" << endl;
        cout << "5 - Afficher la dimension de la Largeur" << endl;
        cout << "6 - Quitter le menu" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1:
            MonRectangle = new Rectangle(1,1);
            MonRectangle->setLongueur();
            MonRectangle->setLargeur();
            cout << "nombre de Rectangle crees = " << Rectangle::getCompteurRectangle() << endl;
            break;
        case 2:
            cout << "perimetre = " << MonRectangle->calculPerimetre() << endl;
            break;
        case 3:
            cout << "Surface = " << MonRectangle->calculSurface() << endl;
            break;
        case 4:
            cout << "dimension de la longueur = " << MonRectangle->getLongueur() << endl;
            break;
        case 5:
            cout << "dimension de la largeur = " << MonRectangle->getLargeur() << endl;
            break;
        case 6:
            if (MonRectangle != nullptr) {
                delete MonRectangle;
                MonRectangle = nullptr;
                cout << "Rectangle supprimer ! " << endl;
            }
            else {
                cout << "A bientot dans la fabirque a Rectangle de Ahmed !!!!" << endl;
            }
            
            break;
        default:
            cout << "Choix invalide !" << endl;
        }
    } while (choix != 6);
}

// ==== Menu Carre ====
void FaireUnCarre() {

    int choix;
    do {
        cout << "\n================ MENU CARRE ================" << endl;
        cout << "1 - Definir un cote" << endl;
        cout << "2 - Calculer le perimetre" << endl;
        cout << "3 - Calculer la surface" << endl;
        cout << "4 - Afficher la dimension du cote" << endl;
        cout << "5 - Quitter le menu" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1: 
            MonCarre = new Carre(1);
            MonCarre->setCote(); 
            cout << "nombre de carre crees = " << Carre::getCompteurcarre() << endl;
            break;
        case 2: 
            cout << "Perimetre = " << MonCarre->perimetre() << endl; 
            break;
        case 3: 
            cout << "Surface = " << MonCarre->surface() << endl; 
            break;
        case 4: 
            cout << "Cote = " << MonCarre->getCote() << endl; 
            break;
        case 5: 
            if (MonCarre != nullptr) {
                delete MonCarre;
                MonCarre = nullptr;
                cout << "Carre supprime ! " << endl;
            }
            else {
                cout << "a bientot dans la fabrique a carre de Ahmed !!!!" << endl;
            }
            break;
        default: 
            cout << "Choix invalide !" << endl;
        }
    } while (choix != 5);
}

// ==== Menu Losange ====
void FaireUnLosange() {
    int choix;
    do {
        cout << "\n================ MENU LOSANGE ================" << endl;
        cout << "1 - Definir par les diagonales" << endl;
        cout << "2 - Definir par un cote + angle" << endl;
        cout << "3 - Afficher dimensions (cote + angle)" << endl;
        cout << "4 - Afficher dimensions (diagonales)" << endl;
        cout << "5 - Calculer le perimetre" << endl;
        cout << "6 - Calculer la surface par diagonales" << endl;
        cout << "7 - Calculer la surface par cote + angle" << endl;
        cout << "8 - Quitter le menu" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1: 
            MonLosange = new Losange(true);
            cout << "nombre de losange crees = " << Losange::getCompteur() << endl;
            break;
        case 2: 
            MonLosange = new Losange();
            cout << "nombre de losange crees = " << Losange::getCompteur() << endl;
            break;
        case 3:
            if (MonLosange) {
                cout << "Cote = " << MonLosange->getCote()
                    << " , Angle = " << MonLosange->getAngleDeg() << " deg" << endl;
            }
            else cout << "Aucun losange cree !" << endl;
            break;
        case 4:
            if (MonLosange) {
                cout << "D1 = " << MonLosange->getD1()
                    << " , D2 = " << MonLosange->getD2() << endl;
            }
            else cout << "Aucun losange cree !" << endl;
            break;
        case 5:
            if (MonLosange) cout << "Perimetre = " << MonLosange->perimetre() << endl;
            else cout << "Aucun losange cree !" << endl;
            break;
        case 6:
            if (MonLosange) cout << "Surface (diagonales) = " << MonLosange->surfaceParDiagonales() << endl;
            else cout << "Aucun losange cree !" << endl;
            break;
        case 7:
            if (MonLosange) cout << "Surface (cote+angle) = " << MonLosange->surfaceParCoteEtAngle() << endl;
            else cout << "Aucun losange cree !" << endl;
            break;
        case 8: 
            if (MonLosange != nullptr) {
                delete MonLosange;
                MonLosange = nullptr;
                cout << "Losange detruit ! " << endl;
            }
            else {
                cout << "a bientot dans la fabrique a Losange de Ahmed !!!! " << endl;
            }
        default: 
            cout << "Choix invalide !" << endl;
        }
    } while (choix != 8);
}

// ==== Menu Cercle ====
void FaireUnCercle() {
    int choix;
    do {
        cout << "\n================ MENU CERCLE ================" << endl;
        cout << "1 - Creer un cercle" << endl;
        cout << "2 - Calculer la surface" << endl;
        cout << "3 - Calculer le perimetre" << endl;
        cout << "4 - Quitter le menu" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1: {
            double r;
            cout << "Entrez le rayon : ";
            cin >> r;
            MonCercle = new Cercle(r);
            cout << "nombre de cercle crees = " << Cercle::getCompteurCercle() << endl;
            break;
        }
        case 2:
            if (MonCercle) cout << "Surface = " << MonCercle->getSurface() << endl;
            else cout << "Veuillez d'abord creer un cercle !" << endl;
            break;
        case 3:
            if (MonCercle) cout << "Perimetre = " << MonCercle->getPerimetre() << endl;
            else cout << "Veuillez d'abord creer un cercle !" << endl;
            break;
        case 4: 
            if (MonCercle != nullptr) {
                delete MonCercle;
                MonCercle = nullptr;
                cout << "Cercle supprimer !" << endl;
            }
            else {
                cout << "a bientot dans la fabrique a cercle de Ahmed !!!!" << endl;
            }
            break;
        default: cout << "Choix invalide !" << endl;
        }
    } while (choix != 4);
}

// ==== Menu Ellipse ====
void FaireUnEllipse() {
    int choix;
    do {
        cout << "\n================ MENU ELLIPSE ================" << endl;
        cout << "1 - Creer une ellipse" << endl;
        cout << "2 - Calculer la surface" << endl;
        cout << "3 - Calculer le perimetre (approx)" << endl;
        cout << "4 - Quitter le menu" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1: {
            double a, b;
            cout << "Entrez demi-grand axe (a) : ";
            cin >> a;
            cout << "Entrez demi-petit axe (b) : ";
            cin >> b;
            MonEllipse = new Ellipse(a, b);
            cout << "nombre d ellipse crees = " << Ellipse::getCompteurellispe() << endl;
            break;
        }
        case 2:
            if (MonEllipse) cout << "Surface = " << MonEllipse->getSurface() << endl;
            else cout << "Veuillez d'abord creer une ellipse !" << endl;
            break;
        case 3:
            if (MonEllipse) cout << "Perimetre (approx) = " << MonEllipse->getPerimetre() << endl;
            else cout << "Veuillez d'abord creer une ellipse !" << endl;
            break;
        case 4: 
            if (MonEllipse != nullptr) {
                delete MonEllipse;
                MonEllipse = nullptr;
                cout << "Ellipse Supprime ! " << endl;
            }
            else {
                cout << "a bientot dans la fabrique a Ellipse de Ahmed !!!!" << endl;
            }
        default: cout << "Choix invalide !" << endl;
        }
    } while (choix != 4);
}

// ==== Menu Triangle ====
void FaireUnTriangleQuelconque() {
    int choix;
    do {
        cout << "\n================ MENU TRIANGLE ================" << endl;
        cout << "1 - Creer un triangle (3 cotes)" << endl;
        cout << "2 - Creer un triangle (2 cotes + 1 angle)" << endl;
        cout << "3 - Calculer le perimetre" << endl;
        cout << "4 - Calculer la surface" << endl;
        cout << "5 - Quitter le menu" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1: {
            double a, b, c;
            cout << "Entrez cote a : "; cin >> a;
            cout << "Entrez cote b : "; cin >> b;
            cout << "Entrez cote c : "; cin >> c;
            MonTriangleQuelconque = new TriangleQuelconque(a, b, c);
            cout << "nombre de  triangle creer = " << TriangleQuelconque::getCompteurTriangle() << endl;
            break;
        }
        case 2: {
            double a, b, ang;
            cout << "Entrez cote a : "; cin >> a;
            cout << "Entrez cote b : "; cin >> b;
            cout << "Entrez angle (deg) : "; cin >> ang;
            MonTriangleQuelconque = new TriangleQuelconque(a, b, ang);
            cout << "nombre de  triangle creer = " << TriangleQuelconque::getCompteurTriangle() << endl;
            break;
        }
        case 3:
            if (MonTriangleQuelconque) cout << "Perimetre = " << MonTriangleQuelconque->getPerimetre() << endl;
            else cout << "Veuillez d'abord creer un triangle !" << endl;
            break;
        case 4:
            if (MonTriangleQuelconque) cout << "Surface = " << MonTriangleQuelconque->getSurface() << endl;
            else cout << "Veuillez d'abord creer un triangle !" << endl;
            break;
        case 5: 
            if (MonTriangleQuelconque != nullptr) {
                delete MonTriangleQuelconque;
                MonTriangleQuelconque = nullptr;
                cout << "TriangleQuelconque detruit " << endl;
            }
            else {
                cout << "a bientot dans la fabrique a TriangleQuelconque de Ahmed !!!! " << endl;
            }
            break;
        default: 
            cout << "Choix invalide !" << endl;
        }
    } while (choix != 5);
}

// ==== Menu Hexagone Irregulier ====
void FaireUnHexagoneIrregulier() {
    int choix;
    do {
        cout << "\n================ MENU HEXAGONE ================" << endl;
        cout << "1 - Creer un hexagone (6 sommets)" << endl;
        cout << "2 - Calculer le perimetre" << endl;
        cout << "3 - Calculer la surface" << endl;
        cout << "4 - Quitter le menu" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1: {
            double sommets[6][2];
            for (int i = 0; i < 6; i++) {
                cout << "Sommet " << (i + 1) << " - x : ";
                cin >> sommets[i][0];
                cout << "Sommet " << (i + 1) << " - y : ";
                cin >> sommets[i][1];
            }
            MonHexagoneIrregulier = new HexagoneIrregulier(sommets);
            cout << "nombre d hexagone creer = " << HexagoneIrregulier::getCompteurHexagone() << endl;
            break;
        }
        case 2:
            if (MonHexagoneIrregulier) cout << "Perimetre = " << MonHexagoneIrregulier->getPerimetre() << endl;
            else cout << "Veuillez d'abord creer un hexagone !" << endl;
            break;
        case 3:
            if (MonHexagoneIrregulier) cout << "Surface = " << MonHexagoneIrregulier->getSurface() << endl;
            else cout << "Veuillez d'abord creer un hexagone !" << endl;
            break;
        case 4: 
            if (MonHexagoneIrregulier != nullptr) {
                delete MonHexagoneIrregulier;
                MonHexagoneIrregulier = nullptr;
                cout << "Hexagone irregulier detruit " << endl;
            }
            else {
                cout << "a bientot dans la fabrique a hexagone de Ahmed !!!!" << endl;
            }
            break;
        default: cout << "Choix invalide !" << endl;
        }
    } while (choix != 4);
}
