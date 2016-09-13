#include<iostream.h>
#include<conio.h>
// a base class which contain a funtion foo which return an intiger value
class base
{
  public :
    int foo(int x)
    { 
      cout<<"base is called";
      return x*x;
    }
}
// a derived  class which contain a funtion foo which return an float value
class derived : public base
{
  public :
    float foo(int x)
    { 
      cout<<"derived is called";
      return x*x;
    }
}
void main()
{
  clrscr();
  int x=10;
  float y=10.16;
  derived* d = new derived;
  cout<<d->foo(x);
  cout<<d->foo(y);
  getch();
}
