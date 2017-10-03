#include<iostream>			//cylinder.cpp
#include "cylinder.h"		//����cylinder.h
#include "point.h"			//����point.h
#include "circle.h"			//����circle.h
#define PI 3.14159265       //�궨��PI
using namespace std;

Cylinder::Cylinder(float newh,float newr,float newx,float newy):Circle(newr),p(newx,newy)  //�����๹�캯��
{
	h=newh;
}

Cylinder::volume()             //�������Ա����
{
	return area()*h;
}

Cylinder::display()				//�������Ա����
{
	Circle::display();						//��������Ա����
	p.show_point();				//����Ӷ���
	cout<<"cylinder_height:"<<h<<endl;		//��������������
	cout<<"cylinder_volume:"<<volume()<<endl;	
}

