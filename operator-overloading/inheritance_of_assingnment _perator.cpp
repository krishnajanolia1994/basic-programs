
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
  krishna operator =(krishna & k);
  void show();
}
krishna krishna::operator =()
{
  krishna sum;
  sum.x=x;
  sum.y=y;
  retun sum;
}
krishna janoliya : public krishna
{
int x,y;
}
void krishna::show()
{
  cout<<x<endl<<y;
}
void janoliya::show()
{
  cout<<x<endl<<y;
}
void main()
{
  clrscr();
  int x,y;
  cin>>x>>y;
  krishna k(x,y);
  janoliya j;
  j=k;
  j.show();
  getch();
}
