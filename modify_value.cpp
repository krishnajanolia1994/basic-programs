#include<iostream.h>
#include<conio.h>
void foo(int *x)
{
  *x=20;
}
void main()
{
  clrscr();
  int x=10;
  foo(&x);
  cout<<x;
  getch();
}
