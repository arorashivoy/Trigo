#include<iostream>

using namespace std;

float degree,radian,angle,angle2,result,cosine;
char redo;

void AngleOne()
{
	if (degree<=90)
		angle=degree;
	if (degree>90 && degree<=180)
		angle=180-degree;
	if (degree>180&& degree<=270)
		angle=(degree-180);
	if (degree>270&& degree<=360)
		angle=(360-degree);
}

void AngleTwo()
{
	if (angle<=45)
		angle2=angle;
	if (angle>45)
		angle2=(90-angle);
}

float Radian()
{
	return (angle2*0.0174);
}

float Cosine()
{
	if (angle<=45)
		return 1-(radian*radian)/2 + (radian*radian*radian*radian)/24 - (radian*radian*radian*radian*radian*radian)/720;
	if (angle>45)
		return radian - (radian*radian*radian)/6 + (radian*radian*radian*radian*radian)/120;
}

int main()
{
	cout<<"In this program you will be able to find out sine of any angle in between 0 to 90 degree"<<endl;
	do{
	cout<<"Enter the angle of which you want to know the trigonometric ratio in degrees"<<endl;
	cin>>degree;
	AngleOne();
	AngleTwo();
	radian=Radian();
	cosine=Cosine();
	if (degree<=90||degree>270&&degree<=360)
		cout<<"The cosine of the angle"<<degree<<" is "<<cosine;
	if (degree>90 && degree <=270)
		cout<<"The cosine of the angle "<<degree<<" is -"<<cosine;
	
	cout<<endl<<endl<<"To redo enter r"<<endl;
	cin>>redo;
	cout<<endl<<endl<<endl;
	}
	while (redo=='r');
	
	return 0;
}