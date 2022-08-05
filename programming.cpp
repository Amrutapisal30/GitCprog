#include<iostream>
using namespace std;
class programming
{
	private:
		string s1;
	public:
		programming()
		{
			s1="I love Programming language";
			cout<<s1;
			
		}
		programming(string s)
		{
			s1=s;
			cout<<"\n i love "<<s1;
		}
		
};
main()
{
	programming p1;
	programming p2("cpp");
	
}