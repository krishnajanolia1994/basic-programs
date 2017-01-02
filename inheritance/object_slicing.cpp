// in c++ derived class object can be assinged in base class object bu reverse is not possible

#include<iostream.h>
#include<conio.h>
class base
{
  public:
    void show()
    {
      cout<<"this is base class";
    }
}
class derived : public base
{
  public:
    void disply()
    {
     cout<<"derived class";
    }
}
void main()
{
  clrscr();
  //create base class pointer
  base b;
  derived d;
  //assingning derived class object into base class object
  b=d;
  b.disply();
  getch();
}
