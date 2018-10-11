//2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
#include<iostream>
using namespace std;
void largest(int arra[],int a)
	{
	int largest=arra[0];
	for(int i=0;i<a;i++)
		{
		if(largest<arra[i])
			 largest=arra[i];
	}
	cout<<"Largest of all the the element in the array is "<<largest<<endl;
}
void smallest(int arra[],int a)
	{
	int smallest=arra[0];
		for(int i=0;i<a;i++)
			{
			if(smallest>arra[i])
				 smallest=arra[i];
		}
	cout<<"Smallest of all the the element in the array is "<<smallest<<endl;
}
void mean(int arra[],float a)
	{
	int sum=0;
	for(int i=0;i<a;i++)
		{
		sum=sum+arra[i];
	}
	float meann=sum/a;
	cout<<"Mean of all the element in the array is "<<meann<<endl;
}
void median(int arra[],int a)
	{
	//swapping by buble sort method
	int swaap;
	for(int i=0;i<(a-1);i++)
		{
		for(int x=0;x<(a-i-1);x++)
			if(arra[x]>arra[x+1])
				{
				swaap=arra[x];
				arra[x]=arra[x+1];
				arra[x+1]=swaap;
			}
	}
	cout<<arra[0]<<arra[1]<<arra[2]<<arra[3]<<arra[4]<<arra[5]<<endl;
	float mediann;
	if(a%2==0)
		{
		 mediann=(arra[a/2]+arra[(a/2)-1])/2;
	}
	else
		{
		 mediann=arra[a/2];
	}
	cout<<"median of the array is "<<mediann<<endl;	
}
void mode(int arra[],int a)
{
}
  
int main()
	{
	int n;
	int arr[n];//declaring a array
	cout<<"enter the number of element you want to put in the arrays"<<endl;
	cin>>n;//inputting no of element
	cout<<"enter the elements of the array"<<endl;
	//repeating a loop so that it takes input equals to the number of elements in the array
	for(int a=0;a<n;a++)
		{
		cin>>arr[a];
	}
	largest(arr,n);//calling function for find largest
	smallest(arr,n);//calling function for find smallest
	mean(arr,n);//calling function for find mean
	median(arr,n);//calling function for finding median
	mode(arr,n);
	return 0;
}

