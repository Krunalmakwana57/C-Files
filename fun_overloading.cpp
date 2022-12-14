#include<iostream>
using namespace std;

class Krunal
{
	public:
		int n;
		void getV(int value)
		{
			n=value;//n=20
		}
		Krunal operator *(Krunal k)
		{
			k.n=n*k.n;//n=20*30===600
		}
		void display()
		{
			cout<<n<<endl;//n=600
		}


};

int main()
{
	Krunal obj,obj1,obj2;
	obj.getV(20);
	obj1.getV(30);
	
	obj2=obj*obj1;
	
	obj2.display();
	
	return 0;
}