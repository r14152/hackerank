/*
	THIS IS SIMPLE PROGRAM TO CHECK THAT IS THIS ARRAY STORE 
	VALUE OR NOT RECURSIVELY
*/
#include<iostream>
#include <cstdio>
using namespace std;
int storeTable(int *arr,int i)
{
	if(i==9)
		return 0;
	else
	{
		//storeTable(arr,i-1)
		arr[i] =i*2;
		storeTable(arr,i+1);
	}
}

int main()
{
	int arr[10],i=0;
	storeTable(arr,0);
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
