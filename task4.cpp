#include <iostream>
using namespace std;
int projectTimeCalculations(int hr,int days,int nw);
main()
{
	int hr,days,nw;
	cout<<"Enter the needed hours:";
	cin>>hr;
	cout<<"Enter the days that the firm has:";
	cin>>days;
	cout<<"Enter the number of all workers:";
	cin>>nw;
	projectTimeCalculations(hr,days,nw);
	return 0;
}

int projectTimeCalculations(int hr,int days,int nw)
{
	int d= days*10;
	int ti= d-(d*0.1);
	int t=ti*nw;
	
	if(t>hr)
	{	
		int tt=t-hr;
		cout<<"Yes! "<<tt <<"hours left.";
	}
	if(hr>t)
	{	int tt=hr-t;
		cout<<"Not enough time! "<<tt<<" hours needed."<<"/n";
	}
}