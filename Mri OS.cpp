#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[5],b[5],i,n,time=0,temp=0,j;
	char p[5];
	cout<<"Enter no of process : ";
	cin>>n;
	cout<<"Enter Process name : ";
	for(i=0;i<n;i++)
		cin>>p[i];
	cout<<"Enter arrival time : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter burst time : ";
	for(i=0;i<n;i++)
		cin>>b[i];
		
	for(i=0;i<n;i++)
	{
		if(a[i]<=time && b[i]>0)
		{
			if(b[i]<7)
				{
					time+=b[i];
					b[i]=0;
				}
			else
				{
					time+=7;
					b[i]-=7;
				}
			cout<<p[i]<<":"<<time<<"\t";
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<=time && b[i]>0)
		{
			if(b[i]<10)
				{
					time+=b[i];
					b[i]=0;
				}
			else
				{
					time+=10;
					b[i]-=10;
				}
			cout<<p[i]<<":"<<time<<"\t";
		}
	}
	
for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(b[i]>=b[temp])
				temp=i;
		}
		if(a[temp]<=time && b[temp]>0)
		{
			time+=b[temp];
			b[temp]=0;
		}
		cout<<p[temp]<<":"<<time<<"\t";
	}
	
		
}
