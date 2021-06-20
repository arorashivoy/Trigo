#include<iostream>

using namespace std;

float degree,radian,angle;

float Radian()
{
	return (angle*0.0174);
}
float Sine()
{
	if (degree<=45)
		return radian - (radian*radian*radian)/6 + (radian*radian*radian*radian*radian)/120;
	if (degree>45)
		return 1-(radian*radian)/2 + (radian*radian*radian*radian)/24 - (radian*radian*radian*radian*radian*radian)/720;
}

int main()
{
	cout<<"In this program you will be able to find out sine of any angle in between 0 to 90 degree"<<endl;
	cout<<"Enter the angle of which you want to know the trigonometric ratio in degrees"<<endl;
	cin>>degree;
	if (degree<=45)
		angle=degree;
	if (degree>45)
		angle=(90-degree);
	radian=Radian();
	
	cout<<"The sine of the angle "<<degree<<" is "<<Sine();
	
	return 0;
}