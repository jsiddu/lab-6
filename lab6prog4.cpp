#include <iostream>
using namespace std;

int main() {
	char arr[10]={'d','a','n','u','s','h'},*ptr;
	ptr=arr;
	cout<<"Printing array using index method"<<endl;
	for(int i=0;arr[i]!='\0';i++)
	cout<<arr[i];
	cout<<"\nPrinting array using pointer method"<<endl;
	for(int i=0;*(ptr+i)!='\0';i++)
	cout<<*(ptr+i);
	return 0;
}