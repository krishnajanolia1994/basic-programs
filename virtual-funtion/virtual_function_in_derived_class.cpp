#include<iostream.h>
#include<conio.h>
// first base calss 
class base
{
  public:
    virtual void dispaly()
    {
      cout<<"this is base class";
    }
}
//first derived class
class derived1 : public base
{
  
  public:
    int area()
    {
      cout<<"this is first derived class";
    }
}
//second  derived class 
calss derived2 : public derived1
{
  public:
  void area()
  {
    cout<<"this is second  derived class";
  }
}
void main()
{
clrscr();
derived2 *d2 = new derived2;
d2->show();
getch();
}
