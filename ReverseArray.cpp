#include<bits/stdc++.h>
int main() {
	
	int size, temp;
	
	cout<<"Enter array size : "<<endl;
	cin>>size;
	int arr[size];
	
	cout<<"Enter array elements : ";
	for(i=0; i<size; i++) 
		cin>>arr[i];
	
	j=i-1;  // now j will point to the last element
	i=0;   //  and i will be point to the first element
	while(i<j) {
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	
	/*
	You can also print the same array in reverse order 
	
	for (i=size-1; i>=0; i--)
		cout<<arr[i];
	
	*/
	
	cout<<"Now the Reverse of the Array is : \n";
	
	for(i=0; i<size; i++)
		cout<<arr[i]<<" ";
	
	return 0;
}