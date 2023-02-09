#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter two numbers: \n");
    scanf("%d %d",&x,&y);
    if (x == y)
    printf("The two numbers are equal \n");
    else if (x > y)
    printtf(" %d is greater than %d",x,y);
    else
    printf("%d is smaller than %d",x,y);

    return 0;
    
}