/*
Write a Program to Implement Inline Functions in CPP
*/
#include<iostream.h>
#include<conio.h>
class test
{
public:
	inline int area(int a,int b)
	{
	return a*b;
	}
	inline int area(double a)
	{
	return a*a;
	}
	inline float area(int a)
	{
	return 3.142*a*a;
	}
};
int main()
{
	test t;
	int l,b,ch,r;
	double s;
	clrscr();
	while(1)
	{
		cout<<"menu"<<endl;
		cout<<"1.rectangle"<<endl;
		cout<<"2.square"<<endl;
		cout<<"3.circle"<<endl;
		cout<<"4.exit"<<endl;
		cout<<"enter choice "<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"enter the length and breath "<<endl;
			cin>>l>>b;
			cout<<"area "<<t.area(l,b)<<endl;
			break;
		case 2:
			cout<<"enter the side "<<endl;
			cin>>s;
			cout<<"area "<<t.area(s)<<endl;
			break;
		case 3:
			cout<<"enter the radius "<<endl;
			cin>>r;
			cout<<"area "<<t.area(r)<<endl;
			break;
		case 4:
			goto c1;
		default:
			cout<<"invalid input"<<endl;
	}
}
	c1:
	getch();
	return 0;
}


//Developed by Aagam Shah
