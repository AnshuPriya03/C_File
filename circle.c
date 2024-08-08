#include<stdio.h>
int main()
{
    float area,pi=3.14;
    int r;
    printf("Enter the value of r\n");
    scanf("%d",&r);
    area=pi*r*r;
    printf("the area of circle is %f",area);
    return 0;
}