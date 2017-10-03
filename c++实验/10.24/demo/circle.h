#ifndef _CIRCLE				//circle.h
#define _CIRCLE

class Circle
{
public:
	Circle();			//声明构造函数
	Circle(float);
	display();				//声明成员函数
	area();

protected:
	float r;
};

#endif