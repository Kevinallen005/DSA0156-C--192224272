#include<iostream>
using namespace std;
int main()
{
	int i,n,m,temp,rem=0,sum;
	cout<<"Enter the number :";
	cin>>m;
	while (m!=0)
	{
		rem=m%10;
		sum=sum*10+rem;
		m/=10;
	}
	cout<<sum;
	
	return 0;
}
