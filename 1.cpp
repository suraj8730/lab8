//1. Write a program to find sum of all elements of an array. (Use functions)
#include<iostream>
using namespace std;
int sumall(int array[],int a)//function for sumation of the array
	{
	int sum=0;
	for(int i=0;i<a;i++)
		{
		sum=sum+array[i];
	}
	return sum;
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
	sumall(arr,n);//calling a function for summation of the element
	cout<<"sum of all elements of the array is "<<sumall(arr,n)<<endl;
	return 0;
}
