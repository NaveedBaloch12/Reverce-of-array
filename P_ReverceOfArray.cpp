#include <iostream>
using namespace std;

int main() { 	// main function start here
	int Len;
	cout<<"Enter Length of array: ";
	cin>>Len;
	int Arr[Len], Rev[Len];
	
	for(int i = 0; i < Len; i++)
	{
		cout<<"Enter Number: ";
		cin>>Arr[i];
	}
	
	int j = Len - 1;
	for(int i = 0; i < Len; i++, j--)
	{
		Rev[i] = Arr[j];
	}
	
		for(int i = 0; i < Len; i++)
	{
		cout<< Rev[i]<< " ";
	}
	
 	return 0;
}
