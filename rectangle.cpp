#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int len,bre;
	public:
		Rectangle();
		Rectangle(int l,int b);
	    int rectarea();
	  	
};
Rectangle ::Rectangle()
{
	len=4;
	bre=5;
}
Rectangle :: Rectangle(int l,int b)
{
	len=l;
	bre=b;
}
int Rectangle::rectarea()
{
	return len*bre;
}
main()
{
	Rectangle r1;
	cout<<"area of rectangle";
	cout<<"\n area of rectagle= "<<r1.rectarea();
	Rectangle r2(7,8);
	cout<<"\n area of rectagle= "<<r2.rectarea();
	cout<<"area of circle";
	
	
}
