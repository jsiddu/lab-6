#include <iostream>
using namespace std;

int main() {
	int a=1,b=2,*p;   /*assigned default values of a and b as 1 and 2 
	because isn't it always good to assign default values?!             */
	p=&a;
	b=*p;
	cout<<"Values of a, b and *p respectively are : "<<a<<","<<b<<","<<*p;
	a=2;
	b=3;
	cout<<"\nValues of a, b and *p respectively are : "<<a<<","<<b<<","<<*p;
	p=&b;
	cout<<"\nValues of a, b and *p respectively are : "<<a<<","<<b<<","<<*p;
	return 0;
}
