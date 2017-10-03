/*
* @Author: Uknow
* @Date:   2016-10-17 15:33:08
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-17 20:28:16
*/

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	Student(int n,string nam)
	{
		num=n;
		name=nam;
	}

	void display()
	{
		cout<<"num:"<<num<<endl<<"name:"<<name<<endl;
	}	
protected:
	int num;
	string name;
};

class Student1:public Student
{
public:
	Student1(int n,string nam,int n1,string nam1,int a,string ad)
	:Student(n,nam),monitor(n1,nam1)
	{
		age=a;
		addr=ad;
	}
	void show()
	{
		cout<<"This student is:"<<endl;
		display();
		cout<<"age:"<<age<<endl;
		cout<<"address:"<<addr<<endl<<endl;
	}
	void show_monitor()
	{
		cout<<endl<<"Class monitor is:"<<endl;
		monitor.display();
	}
private:
	Student monitor;
	int age;
	string addr;
};

int main()
{
	Student1 stud1(10010,"Wang-li",10001,"Li-jun",19,"115 Beijing Road,Shanghai");
	stud1.show();
	stud1.show_monitor();
    return 0;
}