#include<iostream.h>
#include<conio.h>
class base
{ 
  public:
    virtual void show()
    {
      cout<<"this is base class";
    }
 }
 class derived : public base
 {
  public:
    void show()
    {
      cout<<"derived class";
    }
 }
void main()
{
  clrscr();
  //create base class pointer
  base *b;
  //create base class object
  base B;
  //create derived class object
  derived D;
  //assign address of base class object into base calss pointer
  b=&B;
  //call base class funtion
  b->show();
  //assign address of derived class object into base calss pointer
  b=&D;
  //call derived  class funtion
  b->show();
  getch();
}
