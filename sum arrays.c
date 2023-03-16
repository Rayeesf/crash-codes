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
    for (int j=0;j<5;j++)
    {
        sum*=array[j];
    }
    printf("sum of elements=%d",sum);

    return 0;
}
