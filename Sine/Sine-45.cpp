#include<iostream>

using namespace std;

float degree,radian;

float Radian()
{
	return (degree*0.0174);
}
float Sine()
{
	return radian - (radian*radian*radian)/6 + (radian*radian*radian*radian*radian)/120;
}

int main()
{
	cout<<"In this program you will be able to find out sine of any angle in between 0 to 45 degree"<<endl;
	cout<<"Enter the angle of which you want to know the trigonometric ratio in degrees"<<endl;
	cin>>degree;
	radian=Radian();
	
	cout<<"The sine of the angle "<<degree<<" is "<<Sine();
	
	return 0;
}