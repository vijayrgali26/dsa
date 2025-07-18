#include<stdio.h>
int main()
{
    int a[5]={5,10,15};
    
   
    printf("%d\n",sizeof(a));
    printf("%d\n",a[1]);
    printf("%d\n",a[4]);
    a[3]=10;
    printf("%d\n",a[3]);
    return 0;

}

