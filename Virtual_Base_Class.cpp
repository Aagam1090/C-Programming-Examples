#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	char name[20];
	int id;
		public:
		void getter();
};
class subject:virtual public student
{
	protected:
	char name1[20],name2[20],name3[20];
	int m1,m2,m3;
		public:
		void getdata();
};
class auditcourse:virtual public student
{
	protected:
	char grade;
	char name[20];
		public:
		void get();
};
class result:public subject,public auditcourse
{
	int total;
		public:
		void calc();
};
void result::calc()
{
total=m1+m2+m3;
if(total>150&&(grade=='A'||grade=='B'||grade=='C'))
{
cout<<"pass"<<endl;
}
else
{
cout<<"fail"<<endl;
}
}
void student::getter()
{
	cout<<"enter the name of student"<<endl;
	cin>>name;
	cout<<"enter the  id"<<endl;
	cin>>id;
}
void subject::getdata()
{
	cout<<"enter the name of sub 1 "<<endl;
	cin>>name1;
	cout<<"enter the name of sub 1 "<<endl;
	cin>>name2;
	cout<<"enter the name of sub 1 "<<endl;
	cin>>name3;
	cout<<"enter the marks of 3 subject "<<endl;
	cin>>m1>>m2>>m3;

}
void auditcourse::get()
{
	cout<<"enter the name of course"<<endl;
	cin>>name;
	cout<<"enter the grade awarded "<<endl;
	cin>>grade;
}
void main()
{
 clrscr();
 result r;
 r.getter();
 r.getdata();
 r.get();
 r.calc();
 getch();
}
