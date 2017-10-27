#include <iostream>
using namespace std;

int main() {
	char arr[10]={'a','b','c','d','e','f','g','h','i','j'},*ptr;
	ptr=arr;
	cout<<"Printing array using index method"<<endl;
	for(int i=0;i<10;i++)
	cout<<arr[i];
	cout<<"\nPrinting array using pointer method"<<endl;
	for(int i=0;i<10;i++)
	cout<<*(ptr+i);
	return 0;
}