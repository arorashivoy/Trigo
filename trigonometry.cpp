#include<iostream>

using namespace std;

float degree,radian,angle,angle2,result,cosine,sine,tang;
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

float Sine()
{
	if (angle<=45)
		return radian - (radian*radian*radian)/6 + (radian*radian*radian*radian*radian)/120;
	if (angle>45)
		return 1-(radian*radian)/2 + (radian*radian*radian*radian)/24 - (radian*radian*radian*radian*radian*radian)/720;
}

float Cosine()
{
	if (angle<=45)
		return 1-(radian*radian)/2 + (radian*radian*radian*radian)/24 - (radian*radian*radian*radian*radian*radian)/720;
	if (angle>45)
		return radian - (radian*radian*radian)/6 + (radian*radian*radian*radian*radian)/120;
}

void Tan()
{
	tang = sine/cosine;
}

int main()
{
	cout<<"In this program you will be able to find out trigonometric ratios of any angle in between 0 to 90 degree"<<endl;
	do{
	cout<<"Enter the angle of which you want to know the trigonometric ratio in degrees"<<endl;
	cin>>degree;
	AngleOne();
	AngleTwo();
	radian=Radian();
	sine=Sine();
	cosine=Cosine();
	Tan();
	
	if (degree<=90)
	{
		cout<<"The sine of the angle "<<degree<<" is "<<sine<<endl;
		cout<<"The cosine of the angle"<<degree<<" is "<<cosine<<endl;
		cout<<"The Tangent of the angle"<<degree<<" is "<<tang<<endl;
		cout<<"The Cosecant of the angle "<<degree<<" is "<<1/sine<<endl;
		cout<<"The Secant of the angle"<<degree<<" is "<<1/cosine<<endl;
		cout<<"The Cotangent of the angle"<<degree<<" is "<<1/tang<<endl;
	}
	if (degree>90 && degree<=180)
	{
		cout<<"The sine of the angle "<<degree<<" is "<<sine<<endl;
		cout<<"The cosine of the angle"<<degree<<" is -"<<cosine<<endl;
		cout<<"The Tangent of the angle"<<degree<<" is -"<<tang<<endl;
		cout<<"The Cosecant of the angle "<<degree<<" is "<<1/sine<<endl;
		cout<<"The Secant of the angle"<<degree<<" is -"<<1/cosine<<endl;
		cout<<"The Cotangent of the angle"<<degree<<" is -"<<1/tang<<endl;
	}
	if (degree>180&& degree<=270)
	{
		cout<<"The sine of the angle "<<degree<<" is -"<<sine<<endl;
		cout<<"The cosine of the angle"<<degree<<" is -"<<cosine<<endl;
		cout<<"The Tangent of the angle"<<degree<<" is "<<tang<<endl;
		cout<<"The Cosecant of the angle "<<degree<<" is -"<<1/sine<<endl;
		cout<<"The Secant of the angle"<<degree<<" is -"<<1/cosine<<endl;
		cout<<"The Cotangent of the angle"<<degree<<" is "<<1/tang<<endl;
	}
	if (degree>270&& degree<=360)
	{
		cout<<"The sine of the angle "<<degree<<" is -"<<sine<<endl;
		cout<<"The cosine of the angle"<<degree<<" is "<<cosine<<endl;
		cout<<"The Tangent of the angle"<<degree<<" is -"<<tang<<endl;
		cout<<"The Cosecant of the angle "<<degree<<" is -"<<1/sine<<endl;
		cout<<"The Secant of the angle"<<degree<<" is "<<1/cosine<<endl;
		cout<<"The Cotangent of the angle"<<degree<<" is -"<<1/tang<<endl;
	}
	
	
	cout<<endl<<endl<<"To redo enter r"<<endl;
	cin>>redo;
	cout<<endl<<endl<<endl;
	}
	while (redo=='r');
	
	return 0;
}