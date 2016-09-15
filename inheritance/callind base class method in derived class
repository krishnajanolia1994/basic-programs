#include<iostream.h>
#include<conio.h>
//base class which calculte area
class base
{
  int x,y ;
  public:
  base()
  {
  cout<<"enter length and breath in meter";
  cin>>x>>y;
  }
  virtual int volume()
  {
    return x*y;
  }
}
//derived class which calculate volume
class derived1 : public base
{
  int z;
  int volume()
  {
    return z*area();
  }
  public:
  derived1()
  {
    cout<<"enter height";
    cin>>z;
  }
  
}
void main()
{
  clrscr();
  base  *b ;
  derived d;
  b=  &d;
  b->volume;
  getch();
}
