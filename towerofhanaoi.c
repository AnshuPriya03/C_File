#include<stdio.h>
#include<stdlib.h>
    int num;
void towers(int,char,char,char);
void main()
{

    printf("Enter the number of discs\n");
    scanf("%d",&num);
    printf("The sequence of moves involved in the tower of hanaoi are\n");
    towers(num,'s','t','d');
}

void towers(int num,char s,char t,char d)
{
   if(num==1)
   {
    printf("Move the disc 1 from peg %c to %c\n ",s,d);
   return;
   }
   towers(num-1,s,d,t);
      printf("Move the disc %d from peg %c to %c\n",num,s,d);
      towers(num-1,t,s,d);
}