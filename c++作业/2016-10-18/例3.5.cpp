/*
* @Author: Uknow
* @Date:   2016-10-18 21:28:16
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-18 21:35:37
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(int n,string nam,char s)
	{
		num=n;
		name=nam;
		sex=s;
		cout<<"Constructor classed."<<endl;
	}
		~Student()
		{cout<<"Destructor called."<<endl;}

		void display()
		{
			cout<<"num:"<<num<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"sex:"<<sex<<endl<<endl;
		}
private:
	int num;
	string name;
	char sex;
	
};

int main()
{
	Student stud1(10010,"Wang_li",'f');
	stud1.display();
	Student stud2(10010,"Zhang_fan",'m');
	stud2.display();
    return 0;
}