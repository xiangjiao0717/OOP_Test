# ifndef CYLINDER_CPP
# define CYLINDER_CPP
#include <cmath>
#include <iomanip>
# include "Cylinder.h"
double pi = M_PI;
double Cylinder :: SurfaceArea(){
    
    return (pi*radius * radius * 2 + pi*2 * radius * height);
}

double Cylinder :: Volume(){

    return (pi*radius * radius * height) ;
}

double Cylinder :: Circumference(){

    return (pi*2 * radius );
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3);
    out << "Circumference: " << cldr.Circumference() << endl;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
