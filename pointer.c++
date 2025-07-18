#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    /*int a=10;
    int *p;
    p=&a;
    cout<<a<<endl;
    printf("%d",*p);*/

   /* int a[5]={2,4,6,8,10};
    int *p;
    p=a;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }*/

    int *p;
    p=(int*)malloc(5*sizeof(int));
    p[0]=2;p[1]=4; p[2]=6; p[3]=8; p[4]=10;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    free(p);
}