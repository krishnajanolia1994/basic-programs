#include<iostrem.h>
#include<conio.h>
//a function which contain default argument
int multiply(int a, int b=1;int c=1)
{
  int k;
  k=a*b*c;
  return k;
}
void main()
{
  clrscr();
  int a =10;
  int b=20;
  int c=30;
  cout<<multiply(a);
  cout<<multiply(a,b);
  cout<<multiply(a,b,c);
  getch();
}
