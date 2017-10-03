/*
* @Author: Uknow
* @Date:   2016-10-25 21:11:38
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-25 21:23:22
*/

#include <iostream>
using namespace std;

class Time
{
public:
	Time(){minute=0;sec=0;}
	Time(int m,int s):minute(m),sec(s){}
	Time operator ++ ();
	Time operator ++ (int);
	void display(){cout<<minute<<":"<<sec<<endl;}

private:
	int minute;
	int sec;
};

Time Time::operator ++ ()
{
	if (++sec>=60)
	{
		sec-=60;
		++minute;
	}
	return *this;
}

Time Time::operator ++ (int)
{
	Time temp(*this);
	sec++;
	if (sec>=60)
		{
			sec-=60;
			++minute;
		}
		return temp;
}

int main()
{
	Time time1 (34,39),time2;
	cout<<"time1:";
	time1.display();
	++time1;
	cout<<"++time1:";
	time1.display();
	time2=time1++;
	cout<<"time1++:";
	time1.display();
	cout<<"time2:";
	time2.display();
	return 0;
}