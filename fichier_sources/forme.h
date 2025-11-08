#pragma once
//	Auteur : Boukra Bettayeb Ahmed
//	Version : 1.0
//	Date 03/11/2025
//	Objet : Definition des methodes de la classe abstraite Forme 
//			Calcul de Perimetre et de surface
//			Instanciation statique des objets (pas de pointeurs)

#ifndef FORME_H
#define FORME_H

class forme
{
    public:
    forme();
    virtual double getSurface()=0;
    virtual double getPerimetre()=0;
    virtual void SaisirDimension();
    virtual void SaisirDimension(double _dim1);
    virtual void SaisirDimension(double _dim1, double _dim2);
    virtual void SaisirDimension(double _dim1, double _dim2, double _dim3);
    virtual void SaisirDimension(double GrandAxe, double PetitAxe);

};
#endif
