#include<iostraem.h>
#include<conio.h>
template <typename t>
t sum( t x, t y)
{
return (x+y)
}
void main()
{
  int x,y;
  cin>>x,y;
  cout<<sum<int>(x,y);
  getch();
}
