//in C++, we can make operators to work for user defined classes.
//For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +.
#include<iostram.h>
#include<conio.h>
class krishna 
{
  private :
    int x,y;
  public:
  krishna(int a,int b)
  {
    x=a;
    y=b;
  }
  krishna operator +(krishna & k);
  void show();
}
krishna krishna::operator + (krishna & k)
{
  krishna sum;
  sum.x=x+k.x;
  sum.y=y+k.y;
  retun sum;
}
void krishna::show()
{
  cout<<x<endl<<y;
}
void main()
{
  clrscr();
  int x,y;
  cin>>x>>y;
  krishna k(x,y);
  krishna t(x,y);
  krishna j = k+t;
  t.show()
  getch();
}
