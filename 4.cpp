/*4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)*/
#include<iostream>
using namespace std;
void largest(int arra[],int a)
	{
	//we are just comparing one elemnt to its left one and storing the bigger one and so on
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
	//we are just comparing one element to its left one and storing the smaller one and so on
	int smallest=arra[0];
		for(int i=0;i<a;i++)
			{
			if(smallest>arra[i])
				 smallest=arra[i];
		}
	cout<<"Smallest of all the the element in the array is "<<smallest<<endl;
}
int main()
	{
	int n,m;
	cout<<"input the number of element you want in the first array"<<endl;
	cin>>n;//inputting no of element for 1st array
	int arr1[n];//declaring 1st array
	cout<<"Enter the element of the first array"<<endl;
	//repeating a loop so that it takes input equals to the number of elements in the array
	for(int i=0;i<n;i++)
		{
		cin>>arr1[i];
	}
	cout<<"input the number of element you want in an second array"<<endl;
	cin>>m;//inputting no of element for second array
	int arr2[m];//declaring 2nd array
	cout<<"Enter the elemnt of the second array"<<endl;
	//repeating a loop so that it takes input equals to the number of elements in the array
	for(int i=0;i<m;i++)
		{
		cin>>arr2[i];
	}
	//programe to merge array
	int x=n+m;//total element=number of lement in first+number of element in second
	int arr[x];//declaring a array for containg array1 and array 2
	for(int i=0;i<n;i++)
		{
		arr[i]=arr1[i];//first n elements are of the 1st array
	}
	for(int i=0;i<m;i++)
		{
		arr[i+n]=arr2[i];//the second set of elemnts are starting from i+n term 
	}
	//repeating a loop so that it print new array
	for(int i=0;i<x;i++)
		cout<<arr[i]<<" ,";
	cout<<endl;
	largest(arr,x);//calling function for find largest
	smallest(arr,x);//calling function for find smallest

return 0;
}
