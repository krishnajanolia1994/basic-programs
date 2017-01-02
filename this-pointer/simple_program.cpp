//this pointer is a constant pointr which hold memory address of current object
//The ‘this’ pointer is passed as a hidden argument to all nonstatic member function
// the this pointer is available as a local variable within the body of all nonstatic functions
#include<iostream.h>
#include<conio.h>
class krishna
{
  int x;
  public:
    void get(int x)
    {
      //this pointer is used
      this->x=x;
    }
}
void main()
{
  clrscr();
  krishna k;
  int x=5;
  k.get(x);
  getch();
}
