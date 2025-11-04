#include "stdafx.h"
#pragma once


#include "HexagoneIrregulier.h"
#include "Carre.h"
#include "Rectangle.h"
#include "Cercle.h"
#include "Ellipse.h"
#include "Losange.h"
#include "TriangleQuelconque.h"
class GestionForme
{ 
	private :
		Carre* MonCarre;
		Rectangle* MonRectangle;
		Losange* MonLosange;
		Cercle* MonCercle;
		Ellipse* MonEllipse;
		TriangleQuelconque* MonTriangleQuelconque;
		HexagoneIrregulier* MonHexagoneIrregulier;


	public : 
		GestionForme();
};

