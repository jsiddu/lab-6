#include <stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
    char  str[20], *p;
    cout << "Input about 10 characters of string\n";
    cin >> str;
    int c=0;
    for(int i=0;str[i]!='\0';i++)
    c++;
    // Pointer variable refers to address of string 
    p=str+c-1;
    // Show string by shifting top character of string to right
    for(int i=0;i<c;i++)
    {cout<<p<<endl;
    --p;}
    return (0);
}
