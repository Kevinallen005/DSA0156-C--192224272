#include<iostream>
using namespace std;
int main()
{
	int i,n,m;
	cout<<"Enter a number  :";
	cin>>n;
	for (i=0;i<n;i++)
	{
		if (n%i==0)
		{
		cout<<"it is a Prime number ";
		}
		else
		{
			cout<<"it is not a prime number";
		}
		
	}
	return 0;
	
}
