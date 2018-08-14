#include "SolidObj.hpp"

SolidObj::SolidObj(int h,int w,Point2d* _p):height(h),width(w),p(_p){}

SolidObj::~SolidObj(){}

Point2d* SolidObj::getP() const{
    return p;
}

std::ostream& operator<<(std::ostream& os,const SolidObj& s){
    os << "SolidObj : location=" <<s.p << "height = " << s.height << "width = " << s.width << std::endl;
    return os;
} 