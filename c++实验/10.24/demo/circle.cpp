#include<iostream>			//circle.cpp
#include "circle.h" 		//包含cricle.h
#define PI 3.14159265		//宏定义 PI
using namespace std;

Circle::Circle()		//无参构造函数
{
	r=0.0;
}

Circle::Circle(float newr)	//有参构造函数
{
	r=newr;
}

Circle::area()				//面积函数
{
	return r*r*PI;
}

Circle::display()				//输出r,area
{
	cout<<"circle_rad:"<<r<<endl;
	cout<<"circle_area:"<<area()<<endl;
}