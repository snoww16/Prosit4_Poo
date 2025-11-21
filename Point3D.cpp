#include "Point3D.h"
#include "Point.h"
#include <iostream>

namespace points{

    Point3D::Point3D(double x, double y, double z) : x(x), y(y), z(z){}
    Point3D::Point3D(Point* old) : x(old.get_x()), y(old.get_y()), z(old.get_z()){}

    double Point3D::get_x() const {return x;}
    double Point3D::get_y()const {return y;}
    double Point3D::get_z()const {return z;}

    void set_x(double newx) {this->x = newx;}
    void set_y(double newy) {this->y = newy;}
    void set_z(double newz) {this->z = newz;}

    void afficher() const {
        std::cout<<"co x : "<<get_x()<<", co y : "<<get_y()<<", co z : "<<get_z();
    }
}