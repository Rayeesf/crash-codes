#include <stdio.h>
int main() 
{
    int num=1001,rnum=0,orgnum,remainder ;
    orgnum=num;
    while(num!=0)
    {
       
        remainder=num%10;
        rnum=rnum*10+remainder;
        num=num/10;
    }
    if(orgnum==rnum)
    {
        printf("the number is a palindrome");
    }
    else
    {
    printf("the number is not a palindrome");
    }

    return 0;
}
