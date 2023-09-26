#include<iostream>
using namespace std;
int main()
{
	int i,m,n,w1,w2,w3;
	cout<<"Enter the number :";
	cin>>m;
	w1=0;
	w2=1;
	while (m!=0)
	{
		cout<<w1;
		w2=w1+w2;
		w1=w2;
		w2=w3;
		m--;
	}

}
