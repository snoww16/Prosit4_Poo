#pragma once
namespace points{

class Point{
    public:
    virtual double get_x() const = 0;
    virtual double get_y() const = 0;
    virtual double get_z() const = 0;
    virtual void set_x(double) = 0;
    virtual void set_y(double) = 0;
    virtual void set_z(double) = 0;
    virtual void afficher() const = 0;
};
}