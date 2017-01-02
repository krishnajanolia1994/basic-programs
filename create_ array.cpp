#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  //declare a pointer 
  int *p;
  //create array of pointer
  p = new int[10];
  //initialise the array
  for(i=0;i<10;i++)
  {
    cin>>p[i];
  }
  getch();
}
