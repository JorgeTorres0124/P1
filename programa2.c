#include<stdlib.h>
#include<stdio.h>

int main()
{
    int count,sum=0;
    for(count=1;count<=99;count+=2)
     sum=sum+count;
     printf("La sumatoria es %d\n",sum);
}
