// Auteur : Ahmed Boukra Bettayeb
// Version : 3.0
// Date : 16/11/2025

#include "stdafx.h"
#include "forme.h"
int forme::compteurFormes = 0; // define the static counter

forme::forme(){
    incrementerFormes();
}

forme::~forme(){
    decrementerFormes();
}

double forme::getSurface() const{
    return 0.0;
}

double forme::getPerimetre() const  {
    return 0.0;
}

void forme::SaisirDimension(){

}

void forme::SaisirDimension(double _dim1){

}

void forme::SaisirDimension(double _dim1, double _dim2){

}

void forme::SaisirDimension(double _dim1, double _dim2, double _dim3){

}