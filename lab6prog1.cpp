#include <iostream>
using namespace std;

int main() {
	int a=0,*aptr;
	char b='a',*bptr;
	float c=0.0,*cptr;
	bool d=0,*dptr;
	double e=0.0,*eptr;
	void *ptr;
	cout<<"Size of int variable and pointer respectively : "<<sizeof(a)<<","<<sizeof(aptr);
	cout<<"\nSize of char variable and pointer respectively : "<<sizeof(b)<<","<<sizeof(bptr);
	cout<<"\nSize of float variable and pointer respectively : "<<sizeof(c)<<","<<sizeof(cptr);
	cout<<"\nSize of boolean variable and pointer respectively : "<<sizeof(d)<<","<<sizeof(dptr);
	cout<<"\nSize of double variable and pointer respectively : "<<sizeof(e)<<","<<sizeof(eptr);
	cout<<"\nSize of void pointer : "<<sizeof(ptr);
	return 0;
}
