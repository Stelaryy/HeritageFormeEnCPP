// Auteur : Ahmed Boukra Bettayeb
// Version : 3.0
// Date : 16/11/2025

#pragma once   // ou bien #ifndef FORME_H ... #define FORME_H ... #endif

class forme {
public:
    static int compteurFormes;

    static void incrementerFormes() { compteurFormes++; }
    static void decrementerFormes() { if (compteurFormes>0) compteurFormes--; }

    // ctor/dtor declared here and defined in forme.cpp
    forme();
    virtual ~forme();

    virtual double getSurface() const = 0;
    virtual double getPerimetre() const = 0;
    virtual void SaisirDimension();
    virtual void SaisirDimension(double _dim1);
    virtual void SaisirDimension(double _dim1, double _dim2);
    virtual void SaisirDimension(double _dim1, double _dim2, double _dim3);
};
