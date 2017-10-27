#include <stdio.h>
#include<iostream>
using namespace std;
char *p;
void func_strcpy(char str[])
{  char strcpy1[20]={'\0'};
   for(int i=0;str[i]!='\0';i++)
   strcpy1[i]=*(p+i);
   cout<<strcpy1;
}

void func_strcat(char str[],char strcat2[])
{	int i=0;
	char strcat1[40]={'\0'},*p2,*p3;
	p2=strcat1;
	p3=strcat1;
	for(i=0;str[i]!='\0';i++)
	{*(p2+i)=str[i];}
	p2=p2+i;;
	for(int j=i;strcat2[j-i]!='\0';j++)
	*(p2+j-i)=strcat2[j-i];
	cout<<p3;
}

int func_strlen(char str[])
{
	char *p=str,*p2=str;
	for(int i=0;str[i]!='\0';i++)
	p++;
return(p-p2);
	
}

void func_strcmp(char str[], char strcmp2[])
{
	char *p=str,a='a',b='b';
	if(func_strlen(str)==func_strlen(strcmp2))
	{for(int i=0;str[i]!='\0';i++)
	  if(*(p+i)!=strcmp2[i])
	   b='c';
	 if(b=='b')
	  cout<<" Both strings are the same";
	 else
	  cout<<" Both strings are not the same";
	}
	else
	cout<<" Both strings are not the same";
	}

void func_strchr(char str[], char chr)
{
	char *p,a='a';
	p=str;
	for(int i=0;str[i]!='\0';i++)
	{if(*(p+i)==chr)
	  a='b';
	}
if(a=='b')
cout<<" The entered character is present in the string";
else
cout<<" The entered character is not present in the string";
}

void func_strstr(char str1[],char str2[])
{
	char *p,*p2,a,b='b',str[40];
	a=str2[0];
	for(int i=0;str1[i]!='\0';i++)
	str[i]=str1[i];
	p=str;
	p2=str2;
	for(int i=0;str[i]!='\0';i++)
	{
		if(*(p+i)==a)
		{	b='b';
			for(int j=0;str2[j]!='\0';j++)
				if((*(p+i+j))!=(*(p2+j)))
					b='c';}
	}
if(b=='c')
cout<<" The entered substring is not a part of the string";
else
cout<<" The entered substring is a part of the string";
}


int main(void)
{
   char a,str[20],strcat2[20],strcmp2[20],strstr2[20];
   cout<<"Enter your string ";
   cin>>str;
   cout<<"\nEnter string for catenating";
   cin>>strcat2;
   cout<<"\nEnter string for comparing";
   cin>>strcmp2;
   cout<<"\nEnter character for searching";
   cin>>a;
   cout<<"\nEnter string for searching in original string";
   cin>>strstr2;
   p=str;
   cout<<"\nStrcpy:";
   func_strcpy(str);
   cout<<"\nStrcat:";
   func_strcat(str,strcat2);
   cout<<"\nStrlen:"<<func_strlen(str);
   cout<<"\nStrcmp:";
   func_strcmp(str,strcmp2);
   cout<<"\nStchr:";
   func_strchr(str,a);
   cout<<"\nStrstr:";
   func_strstr(str,strstr2);
   /*i don't know why, but in ideone, once you enter space in a string,
   it automatically ends the string at the space. 
   So everything goes haywire when there are spaces. please discuss this 
   problem in class if there is a solution to it */
    return (0);
}
