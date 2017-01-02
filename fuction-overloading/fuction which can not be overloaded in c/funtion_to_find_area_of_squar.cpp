// fuction which  have different return type cant be overloded
#include<iostream.h>
#include<conio.h>
//a function which multiply a intiger value by 10
int foo()
{
  int y=10;
  y*=10;
  return y;
}
//a function which devide a intiger value by 10
float foo()
{
  float y=200;
  y/=10;
  return y;
}
void main()
{
  clrscr();
  //the given two statment creats ambiguity
  foo();
  foo();
  getch();
}
