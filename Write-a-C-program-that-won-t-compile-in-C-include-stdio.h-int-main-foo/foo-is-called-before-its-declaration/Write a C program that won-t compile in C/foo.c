#include<stdio.h>
int main()
{
   foo(); // foo() is called before its declaration/definition
}
 
int foo()
{
   printf("Hello");
   return 0;
}
