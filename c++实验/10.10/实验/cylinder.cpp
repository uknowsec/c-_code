/*
* @Author: Uknow
* @Date:   2016-10-10 15:30:05
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-10 17:24:52
*/

#include <iostream>
#define PI 3.14159265            //�궨�� PI=3.14159265
using namespace std;

class Cylinder
{
public:
	Cylinder();               //����һ���޲εĹ��캯��Cylinder
	Cylinder(int r,int h) :radius(r),height(h){};   //����һ���в����Ĺ��캯�����ò����ĳ�ʼ��������ݳ�Ա��ʼ��
	Cylinder1(int rad,int hei)			//�����в����Ĺ��캯��
	{
		radius=rad;
		height=hei;
		cout<<"Constructor called."<<endl;			//����й���Ϣ
	}

	~Cylinder()										//������������
	{
		cout<<"Destructor called."<<endl;			//���ָ������Ϣ
	}

	void show_data();								//������Ա����
private:
	int radius;
	int	height;
};

Cylinder::Cylinder()								//�����ⶨ���޲ι��캯��Cylinder
{
	radius=10;
	height=10;
}

void Cylinder::show_data()							//�����ⶨ���Ա����volume
{
	int volume;										//����������
	int side_area;									//������������
	int bottom_area;								//������������
	side_area=2*PI*radius*height;
	bottom_area=PI*radius*radius;
	volume=PI*radius*radius*height;			
	cout<<"the side_area:"<<side_area<<endl;			//��������
	cout<<"the bottom_area:"<<bottom_area<<endl;		//��������
	cout<<"the volume:"<<volume<<endl<<endl;			//������
}	

int main()
{
	Cylinder cylinder1;								//��������cylinder1����ָ��ʵ��
	cout<<"The data of cylinder1"<<endl;			//�����ص�����
	cylinder1.show_data();

	Cylinder a[3]={									//����������鲢���ù��캯�����ṩʵ��
		Cylinder(10,10),
		Cylinder(20,20),	
		Cylinder(30,30)
	};
	cout<<"The data of a[0]"<<endl;					//�����ص�����
	a[0].show_data();
	cout<<"The data of a[1]"<<endl;
	a[1].show_data();
	cout<<"The data of a[2]"<<endl;
	a[2].show_data();

	Cylinder cyl1(5,5);								//��������cyl1
	cout<<"The data of cyl1"<<endl;					//����������
	cyl1.show_data();
	return 0;
}