#include<iostream>
using namespace std;
class piggybank
{
	int amount;
	public:
		piggybank()
		{
			amount=50;
		}
		piggybank(int r)
		{
			amount=50+r;
		}
		void display()
		{
			cout<<"\n amount= "<<amount;
			
		}
};
main()
{
	piggybank b1;
	b1.display();
	piggybank b2(100);
	b2.display();
}