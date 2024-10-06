#include <iostream>
#include <string>
using namespace std;
float cal(float l,float w,float h,string u);
int main()
{
    float l,w,h;
    string u;
    cout<<"Enter the length of the pyramid(in meters):";
    cin>>l;
    cout<<"Enter the width of the pyramid(in meters):";
    cin>>w;
    cout<<"Enter the height of the pyramid(in meters):";
    cin>>h;
    cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers):";
    cin>>u;
    cal(l,w,h,u);
    
    
    return 0;
    
}
float cal(float l,float w,float h,string u)
{
    float vol,volume;
    
    vol=(l*w*h)/3;
    if (u=="millimeters")
    {
        volume=vol*1000000000;
	cout<<"The volume is "<<volume<<" cubic "<<u<<"\n";
    }
    else if (u=="centimeters")
    {
        volume=vol*1000000;
	cout<<"The volume is "<<volume<<" cubic "<<u<<"\n";
    }
    else if (u=="meters")
    {
        volume=vol;
	cout<<"The volume is "<<volume<<" cubic "<<u<<"\n";
    }
    else if (u=="kilometers")
    {
        volume=vol/1000000000;
	cout<<"The volume is "<<volume<<" cubic "<<u<<"\n";
    }

}