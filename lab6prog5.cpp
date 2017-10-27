#include <stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
    char  str[20], *p;
    cout << "Input about 10 characters of string\n";
    cin >> str;
    p=str;
    for(int i=0;i<sizeof(str);i++)
    {cout<<p<<endl;
    ++p;}
    return (0);
}
