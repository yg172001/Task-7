#include<iostream>
using namespace std;
	void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\n after swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b;
}
int main()
{
	int a,b;
	cout<<"Enter Value Of 1st no.:";
	cin>>a;
	cout<<"Enter Value of 2nd no.:";
	cin>>b;
	cout<<"Before swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b;
	swap(a,b);
}