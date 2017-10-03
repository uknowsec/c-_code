#include<iostream>            //point.cpp
#include "point.h"			//包含 point.h
#define PI 3.14159265       //宏定义PI
using namespace std;

Point::Point()				//无参构造函数初始化
{
	x=0.0;
	y=0.0;
}

Point::Point(float newx,float newy)		//有参构造函数初始化
{
	x=newx;
	y=newy;
}

Point::show_point()					//输出x,y
{
	cout<<"central_point: ("<<x<<","<<y<<")"<<endl;
}