#include<iostram.h>
#include<conio.h>
class krishna
{
  private :
    int x,y;
  public:
    
    friend ifstream operator <<(ifstram & k , krishna & c);
    void show();
}
ifstream operator + (ifstream & k , krishna &c)
{
  k>>c.x;
  k>>c.y;
  return k;
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
  krishna k,t,j;
  cin>>k>>t>>j;
 
  t.show();
  j.show();
  k.show();
  cout<<t;
  getch();
}
