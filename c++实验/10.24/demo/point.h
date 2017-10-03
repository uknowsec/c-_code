#ifndef _POINT			//point.h
#define _POINT

class Point
{				
public:
	Point();				//声明构造函数
	Point(float,float);
	show_point();			//声明成员函数

protected:
	float x;
	float y;
};

#endif