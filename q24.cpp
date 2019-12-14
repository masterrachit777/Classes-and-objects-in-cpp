#include<iostream>
#include<conio.h>
using namespace std;
class box
{
	int l,b,h;
	public:
		box()
		{
			cin>>l>>b>>h;
		}
		void operator++();
		void operator++(int);
		void operator--();
		void operator--(int);
		void operator=(box &t);
		friend void operator==(box &B,box &C);
		void sarea()
		{
			int s=(l*b)+(b*h)+(h*l);
			cout<<"Surface area of box is: "<<s<<endl;
		}
		void vol()
		{
			int v=(l*b*h);
			cout<<"Volume of box is: "<<v<<endl;
		}
		void show()
		{
			cout<<"l is: "<<l<<endl;
			cout<<"b is: "<<b<<endl;
			cout<<"h is: "<<h<<endl;
		}
		void check()
		{
			if(l==b && b==h)
			cout<<"It is a Cube"<<endl;
			else
			cout<<"It is a Cuboid"<<endl;
		}
};
void box::operator++()
{
	++l; ++b; ++h;
}
void box::operator++(int)
{
	l++; b++; h++;
}
void box::operator--()
{
	--l; --b; --h;
}
void box::operator--(int)
{
	l--; b--; h--;
}
void box::operator=(box &t)
{
	l=t.l; b=t.b; h=t.h;
}
void operator==(box &B,box &C)
{
	if(B.l==C.l && B.b==C.b && B.h==C.h)
	cout<<"Both are equal"<<endl;
	else
	cout<<"Both are unequal"<<endl;
}
int main()
{
	cout<<"Enter the values of l,b and h for first box : ";
	box b1;
	b1.check();
	b1.show();
	b1.sarea();
	b1.vol();
	++b1;
	b1++;
	b1.show();
	b1.sarea();
	b1.vol();
	--b1;
	b1--;
	b1.show();
	cout<<"Enter the values of l,b and h for second box: ";
	box b2;
	b2.check();
	b1==b2;
	getch();
	return 0;
}
