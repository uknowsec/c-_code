/*
* @Author: Uknow
* @Date:   2016-10-19 22:36:55
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-19 22:45:58
*/

#include <iostream>
using namespace std;
template <class numtype>

class Compare
{
public:
	Compare(numtype a,numtype b)
	{x=a;y=b;}
	numtype max()
	{return (x>y)?x:y;}
	numtype min()
	{return (x<y)?x:y;}
private:
	numtype x,y;
	
};


int main()
{
	Compare<int> cmp1(3,7);
	cout<<cmp1.max()<<" is the Maximum of two integer numbers."<<endl;
	cout<<cmp1.min()<<" is the Minimum of two integer numbers."<<endl<<endl;
	Compare<float> cmp2(45.78,93.6);
	cout<<cmp2.max()<<" is the Maximum of two float numbers."<<endl;
	cout<<cmp2.min()<<" is the Minimum of two float numbers."<<endl<<endl;
	Compare<char> cmp3('a','A');
	cout<<cmp3.max()<<" is the Maximum of two charactoers."<<endl;
	cout<<cmp3.min()<<" is the Minimum of two charactoers."<<endl<<endl;
	return 0;
}