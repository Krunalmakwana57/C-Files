#include<iostream>
using namespace std;

class Bank
{
	protected :
		int atm_pin=1234;
		float balance=12345.56;
			
};
class user1 : public Bank
{
	public:
		string IFSC="SBI0001";
		string bank_name="StateBankOfIndia";	
		long long int acc_num=12345678911221;
		void info()
		{
			cout<<"Atm Pin Is "<<atm_pin<<endl;
			cout<<"Your Balance Is : "<<balance<<endl;
		}
	
};
int main()
{
	user1 obj;
	cout<<"Account No is : "<<obj.acc_num<<endl;
	cout<<"IFSC Code is : "<<obj.IFSC<<endl;
	obj.info();
	
	return 0;
}