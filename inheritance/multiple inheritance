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
  int area()
  {
    return x*y;
  }
}
//derived class which calculate volume
class derived1 : public base
{
  int z;
  public:
  derived1()
  {
    cout<<"enter height";
    cin>>z;
  }
  int volume()
  {
    return z*area();
  }
}
//derived class which show area in cm squar
calss derived2
{
  derived2()
  {}
  void show()
  {
    cout<<"area in cm squar is";
    cout<<endl<<area()*10000;
  }
}
void main()
{
  clrscr();
  derived2  *d2 = new derived2;
  d2->show();
  derived1  *d1 = new derived1;
  d1->volume();
  getch();
}
