#include<stdio.h>
int main(){
   char operator;
   double n1,n2,result;
   printf("enter the operator(+,-,*,/): ");
   scanf("%c",&operator);
   printf("enter number 1:");
   scanf("%lf",&n1);
   printf("enter the number 2:");
   scanf("%lf",n2);
   switch(operator)
   {
      case'+':
         printf("this is addition");
         result=n1+n2;
         printf("the result of addition is: %lf",result);
         break;
      case'-':
         printf("this is subtraction");
         result=n1-n2;
         printf("the result of subtraction is:%lf",result);
         break;
      case'*':
         printf("this is multiplication");
         result=n1*n2;
         printf("the result of multiplication is:%lf",result);
         break;
      case '/':
         printf("this is division");
         result=n1/n2;
         printf("the result of divison is:%lf",result);
         break;
      default:
         printf("please input valid operator!!!");
         break;
          
   }
   return 0;
   
}