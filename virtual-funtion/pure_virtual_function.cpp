#include<iostream.h>
#include<conio.h>
class power1
{
  public:
    virtual int Power() = 0;
}
class power2 :public power1
{
  int y
  public:
    virtual int Power()
    {
      cout<<" enter a number";
      cin>>y;
      return y*y;
    }
}

class power3 :public power2
{
  int x;
  public:
    virtual int Power() 
    {
      cout<<" enter a number";
      cin>>y;
      return y*y*y;
    }
}
void main()
{
  power *p = new power3;
  p->power();
  getch;
}
