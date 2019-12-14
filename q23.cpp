#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class triangle
{
	int bs,h,a,b,c;
	public:
		triangle()
		{
			bs=10; h=5;
		}
		triangle(int x,int y,int z)
		{
			a=x; b=y; c=z;
		}
		void area()
		{
			float ar=(0.5*bs*h);
			cout<<"Area by default method is: "<<ar<<endl;
		}
		void area(int p,int q,int r)
		{
			a=p; b=q; c=r;
			float s=(a+b+c)/2;
			double arr=sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"Area by Heron's formula is: "<<arr<<endl;
		}
		void show()
		{
			cout<<"a is: "<<a<<endl;
			cout<<"b is: "<<b<<endl;
			cout<<"c is: "<<c<<endl;
		}
		void operator=(triangle &t);
		void operator==(triangle &T);
};
void triangle::operator=(triangle &t)
{
	a=t.a; b=t.b; c=t.c;
}
void triangle::operator==(triangle &T)
{
	if(T.a==T.b)
	{
		if(T.b==T.c)
		cout<<"Equilateral Triangle"<<endl;
		else
		cout<<"Isoceles Triangle"<<endl;
	}
	else if(T.b==T.c)
	cout<<"Isoceles Triangle"<<endl;
	else if(T.a==T.c)
	cout<<"Isoceles Triangle"<<endl;
	else
	cout<<"Scalene Triangle"<<endl;
}
int main()
{
	triangle t1;
	t1.area();
	triangle t2(3,4,5);
	t2.area(3,4,5);
	t2==t2;
	triangle t3(6,6,6);
	t3.area(6,6,6);
	t3==t3;
	triangle t4(7,8,7);
	t4.area(7,8,7);
	t4==t4;
	cout<<"After assigning t2 to t3: "<<endl;
	t3=t2;
	t3.show();
	getch();
	return 0;
}
