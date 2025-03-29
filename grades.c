#include<stdio.h>
int main()
{
   char grade;
   printf("please enter your grade: ");
   scanf("%c",&grade);

   switch (grade)
   {
   case 'a':
      printf("perfect score!!");
      break;
   case 'b':
      printf("nice");
      break;
   case 'c':
      printf("ok");
      break;
   case 'd':
      printf("mid");
      break;
   case 'e':
      printf("bad");
      break;
   case 'f':
      printf("fail");
      break;
   default:
      printf("enter only grades");
      break;
   }
   return 0;
}