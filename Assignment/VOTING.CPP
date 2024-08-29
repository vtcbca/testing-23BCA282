/*WAP to check you're eligible for voting or not*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"enter your age:";
	cin>>a;
	if(a>=19)
		cout<<"you're eligible for voting"<<a;
	 else
		cout<<"you're not eligible for voting"<<a;
	  getch();
}
