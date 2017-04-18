#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  float d;
  char ch;
  scanf("%d",&a);
  scanf("%d",&b);
  printf("\n enter the operator");
  scanf("\n %c",ch);
  switch(ch)
  {
   case '+';
      c=a+b;
      printf("\n the addition is %d",c);
      break;
   case '-';
      c=a-b;
      printf("\n the subtraction is %d",c);
      break;
   case '*';
      c=a*b;
      printf("\n the multiplication is %d",c);
      break;
   case '%';
      c=a%b;
      printf("\n the modulo is %d",d);
      break;
   default;
      printf("\n you selected a wrong key");
    }
