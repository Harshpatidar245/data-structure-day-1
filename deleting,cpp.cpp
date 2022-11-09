#include<iostream>
using namespace std;
int main()
{
	int i,num,t,n;
	cout<<"number  elements in aaray\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter number to be eleted";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			t=i;
		}
		
	}
	for(i=t;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n=n+1;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}






