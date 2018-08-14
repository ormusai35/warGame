#pragma once
#include <iostream>

class Point2d {
    
    double x;
    double y;
    
public:
    /*Constructor*/
    Point2d(double, double);
    /*Copy Constructor*/
    Point2d(const Point2d&);
    /*Return x*/
    double getX() const;
    /*Return y*/
    double getY() const;
    /*Update new x*/
    void setX(double);
    /*Update new y*/
    void setY(double);
    /*Return distance*/
    double distance(Point2d*) const;
    
    /*Funcuion that prints the point*/
    friend std::ostream& operator<<(std::ostream&,const Point2d&);
};