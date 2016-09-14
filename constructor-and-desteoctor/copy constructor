// copy constructor is a constructor which copy value of data members of one object into data members of another object
#include<iostream.h>
#include<conio.h>
class krishna
{
  int x, y;
  public:
    //normal contructor defined
    krishna(int x, int y)
    {
      this->x=x;
      this->y=y;
    }
    //copy contructor is defined
    krishna(const krishna & k)
    {
      x=k.x;
      y=k.y;
    }
    int sum()
    {
      int z;
      z=x+y;
      return z;
    }
}
void main()
{
  int x,y;
  cin>>x>>y;
  krishna k1(x,y);
  //copy contructor is called
  krishna k2= k1;
  cout<<k1.sum()<<endl;
  cout<<k2.sum;
  getch();
}
