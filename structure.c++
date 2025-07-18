#include<stdio.h>
#include<iostream>
using namespace std;
struct reactangle{
    int length;
    int breadth;
}r1;

int main()
{
    r1.length=10;
    r1.breadth=15;
    printf("%d\n",sizeof(r1));
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
}
