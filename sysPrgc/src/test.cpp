#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<iostream>

using namespace std;

int main(int argc,char* argv[])
{
	cout<<"enter the totat number of natural number"<<argc<<end1;
	cout<<"here is the list of natural numbers"<<end1;

       for(int i=0;i<=argc;i++)
       {
cout<<argv[i]<<end1;
       }
       return 0}
