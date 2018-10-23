//2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
#include<iostream>
using namespace std;
void largest(int arra[],int a)
	{
	int largest=arra[0];
	for(int i=0;i<a;i++)
		{
		if(largest<arra[i])//we are just comparing one element to its left one and storing the bigger one and so on
			 largest=arra[i];
	}
	cout<<"Largest of all the the element in the array is "<<largest<<endl;
}
void smallest(int arra[],int a)
	{
	int smallest=arra[0];
		for(int i=0;i<a;i++)
			{
			if(smallest>arra[i])//we are just comparing one element to its left one and storing the smaller one and so on
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
	//for shorting we are using buble shorting in which we are taking elements one byu one and the arranging them
	for(int i=0;i<(a-1);i++)
		{
		for(int x=0;x<(a-i-1);x++)
			if(arra[x]>arra[x+1])//the bigger number always swap to right side of the number
				{
				swaap=arra[x];
				arra[x]=arra[x+1];
				arra[x+1]=swaap;
			}
	}
	float mediann;
	if(a%2==0)//if the number of elements are odd then the middle number is the median
		{
		 mediann=(arra[a/2]+arra[(a/2)-1])/2.0;
	}
	else//if the elements number are even then median is the sum of middle and the next one devided by 2
		{
		 mediann=arra[a/2];
	}
	cout<<"median of the array is "<<mediann<<endl;	
}
void mode(int arra[],int a)
	{
	//we arrang the array in assending series by bubble short method
	int arange;
	for(int i=0;i<(a-1);i++)
		{
		for(int x=0;x<(a-i-1);x++)
			if(arra[x]>arra[x+1])
				{
				arange=arra[x];
				arra[x]=arra[x+1];
				arra[x+1]=arange;
			}
	}
	//we are comparing one number with the next one and the acording to that we are adding 1 to a variable , and after all the array is complketed the number having the bigest variable value is our 	mode
	int num = arra[0];	
	int mode = num;
	int count = 1;
	int countmod = 1;
	for(int i=1;i<a;i++)
		{
		if(arra[i]==num) 
	   		{
			count++;//we are adding 1 every time the same number repeates in the array
		}
		else
			{
			if (count>countmod) 
				{
				countmod=count;
				mode=num;
			}
			count=1;
			num=arra[i];
		}
	}
	cout<<"Elements with highest frequency in the array is "<<mode<<endl;
}
int main()
	{
	int n;
	cout<<"enter the number of element you want to put in the arrays"<<endl;
	cin>>n;//inputting no of element
	int arr[n];//declaring a array
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
	mode(arr,n);//calling function for elements with highest frequency of the elements
	return 0;
}
