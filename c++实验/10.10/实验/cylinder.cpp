/*
* @Author: Uknow
* @Date:   2016-10-10 15:30:05
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-10 17:24:52
*/

#include <iostream>
#define PI 3.14159265            //宏定义 PI=3.14159265
using namespace std;

class Cylinder
{
public:
	Cylinder();               //声明一个无参的构造函数Cylinder
	Cylinder(int r,int h) :radius(r),height(h){};   //定义一个有参数的构造函数，用参数的初始化表对数据成员初始化
	Cylinder1(int rad,int hei)			//定义有参数的构造函数
	{
		radius=rad;
		height=hei;
		cout<<"Constructor called."<<endl;			//输出有关信息
	}

	~Cylinder()										//定义析构函数
	{
		cout<<"Destructor called."<<endl;			//输出指定的信息
	}

	void show_data();								//声明成员函数
private:
	int radius;
	int	height;
};

Cylinder::Cylinder()								//在类外定义无参构造函数Cylinder
{
	radius=10;
	height=10;
}

void Cylinder::show_data()							//在类外定义成员函数volume
{
	int volume;										//定义变量体积
	int side_area;									//定义变量侧面积
	int bottom_area;								//定义变量底面积
	side_area=2*PI*radius*height;
	bottom_area=PI*radius*radius;
	volume=PI*radius*radius*height;			
	cout<<"the side_area:"<<side_area<<endl;			//输出侧面积
	cout<<"the bottom_area:"<<bottom_area<<endl;		//输出底面积
	cout<<"the volume:"<<volume<<endl<<endl;			//输出体积
}	

int main()
{
	Cylinder cylinder1;								//建立对象cylinder1，不指定实参
	cout<<"The data of cylinder1"<<endl;			//输出相关的数据
	cylinder1.show_data();

	Cylinder a[3]={									//定义对象数组并调用构造函数，提供实参
		Cylinder(10,10),
		Cylinder(20,20),	
		Cylinder(30,30)
	};
	cout<<"The data of a[0]"<<endl;					//输出相关的数据
	a[0].show_data();
	cout<<"The data of a[1]"<<endl;
	a[1].show_data();
	cout<<"The data of a[2]"<<endl;
	a[2].show_data();

	Cylinder cyl1(5,5);								//建立对象cyl1
	cout<<"The data of cyl1"<<endl;					//输出相关数据
	cyl1.show_data();
	return 0;
}