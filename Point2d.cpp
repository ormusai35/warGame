#include "Point2d.hpp"
#include <math.h>

Point2d:: Point2d(double _x, double _y):x(_x),y(_y){}

Point2d:: Point2d(const Point2d& _p):x(_p.x),y(_p.y){}

double Point2d:: getX() const
{
    return x;
}

double Point2d:: getY() const
{
    return y;
}

void Point2d:: setX(double _x)
{
    x = _x;
}

void Point2d:: setY(double _y)
{
    y = _y;
}

double Point2d:: distance(Point2d* other) const
{
    double ans = pow(other->x - this->x , 2) + pow(other->y - this->y , 2);
    return sqrt(ans);
}

std::ostream& operator<<(std::ostream& os,const Point2d& p){
    os << "[" <<p.x << "," << p.y << "]" << std::endl;
    return os;
}