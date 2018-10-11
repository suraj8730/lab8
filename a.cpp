#include<iostream>
using namespace std;
void bubble_sort( int A[ ], int n ) {
    int temp;
    for(int k = 0; k< n-1; k++) {
        // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                // here swapping of positions is being done.
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
cout<<A[0]<<A[1]<<A[2]<<A[3]<<A[4]<<A[5]<<endl;
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
	cout<<arr[n]<<endl;
	bubble_sort( arr, n );

return 0;

}
