#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",  &num);
    if(num>0){
        if(num%2==0)
        printf("%d, num is even");
    }
    else
    { 
        printf("%d, num is odd");
    }
     if(num<0){
        printf("%d, num is negative");
    }
    else{
        printf("%d, number is zero");
    }
    return 0;
}