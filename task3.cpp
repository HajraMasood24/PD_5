#include <iostream>
using namespace std;

float taxCalculator(char type,float price);

int main()
{
	char type;
	float price,fp;
	cout<<"Enter the vehicle type code (M, E, S, V ,T):";
	cin>>type;
	cout<<"Enter the price of the vehicle:$";
	cin>>price;
	fp=taxCalculator(type,price);
	cout<<"The final price of vehical type "<<type<<" after adding the tax is $"<<fp;
	return 0;
	

}
float taxCalculator(char type,float price)
{
	float fp,tx,ta;

	if (type=='M')
	{
		tx=6;
	}
	if (type=='E')
	{
		tx=8;
	}
	if (type=='S')
	{
		tx=10;
	}
	if (type=='V')
	{
		tx=12;
	}		
	if (type=='T')
	{
		tx=15;
	}
	ta=price*(tx/100);
	fp=price+ta;
	return fp;
}				