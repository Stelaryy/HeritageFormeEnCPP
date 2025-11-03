//	Auteur : Boukra Bettayeb Ahmed
//	Version : 1.0
//	Date 03/11/2025
//	Objet : Definition des methodes de la classe abstraite Forme 
//			Calcul de Perimetre et de surface
//			Instanciation statique des objets (pas de pointeurs)

#pragma
class forme
{
    public:
    forme();
    virtual double getsurface()=0;
    virtual double getperimetre()=0;
    virtual void SaisirDimension();
    virtual void SaisirDimension(double _dim1);
    virtual void SaisirDimension(double _dim1, double _dim2);
    virtual void SaisirDimension(double _dim1, double _dim2, double _dim3);

};