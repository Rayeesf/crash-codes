#include <stdio.h>
int main() 
{
    int array[5];
    int sum=1;
    printf("enter array\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("third element is=%d",array[2]);

    return 0;
}
