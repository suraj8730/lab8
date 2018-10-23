//3. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
#include<iostream>
using namespace std;
void klarge(int arra[],int a,int k)
	{
	//first we arrange the number
	int arrange;
	for(int x=0;x<(a-1);x++)
		{
		for(int y=0;y<(a-x-1);y++)
			if(arra[y]>arra[y+1])
				{
				arrange=arra[y];
				arra[y]=arra[y+1];
				arra[y+1]=arrange;
			}
	}
cout<<"The "<<k<<"th largest number in the array is "<<arra[a-k]<<endl;//kth largest number is (total elements-k-1),so the number is in a-k place in array
}
void ksmall(int arra[],int a,int k)
	{
	//first we arrange the number
	int arrange;
	for(int x=0;x<(a-1);x++)
		{
		for(int y=0;y<(a-x-1);y++)
			if(arra[y]>arra[y+1])
				{
				arrange=arra[y];
				arra[y]=arra[y+1];
				arra[y+1]=arrange;
			}
	}
cout<<"The "<<k<<"th smallest number in the array is "<<arra[k-1]<<endl;//kth smallest number is (k),so the number is in k-1 place in array
}

int main()
	{
	int n,l,m;
	cout<<"input the number of element you want in an array"<<endl;
	cin>>n;//inputting no of element
	int arr[n];//declaring a array
	cout<<"Enter the elemnt of the array"<<endl;
	//repeating a loop so that it takes input equals to the number of elements in the array
	for(int i=0;i<n;i++)
		{
		cin>>arr[i];
	}
	cout<<"input which largest number you want"<<endl; 
	cin>>l;
	klarge(arr,n,l);
	cout<<"input which smalest number you want"<<endl; 
	cin>>m;
	ksmall(arr,n,m);
return 0;
}
