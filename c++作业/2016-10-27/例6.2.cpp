/*
* @Author: Uknow
* @Date:   2016-10-27 23:17:27
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-27 23:25:49
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(int,string,float);
	void display();
protected:
	int num;
	string name;
	float score;
	
};

Student::Student(int n,string nam,float s)
{
	num=n;
	name=nam;
	score=s;
}

void Student::display()
{
	cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\n\n";
}

class Graduate:public Student
{
public:
	Graduate(int,string,float,float);
	void display();
private:
	float wage;
	
};

Graduate::Graduate(int n,string nam,float s,float w):Student(n,nam,s),wage(w){}

void Graduate::display()
{
	cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\nwage="<<wage<<endl;
}


int main()
{
	Student stud1(1001,"Li",87.5);
	Graduate grad1(2001,"Wang",98.5,1200);
	Student *pt=&stud1;
	pt->display();
	pt=&grad1;
	pt->display();
	return 0;
}