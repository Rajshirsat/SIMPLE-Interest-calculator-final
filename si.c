// simple calculator 
#include <stdio.h>
int main()
{
    float a, b, c, si;
    printf("Enter Amount You Borrow :");
    scanf("%f", &a);
    printf("Enter Rate of interest :");
    scanf("%f", &b);
    printf("Enter Year of YOu Pay Back :");
    scanf("%f", &c);
    
    //formula for calculate si
    si = (a*b*c)/100;
    printf("%f", si);
    return 0;
    }